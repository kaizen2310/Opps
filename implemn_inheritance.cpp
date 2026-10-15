#include <iostream>
#include <string>
using namespace std;

class Vehicle{

protected:
    string name;
public:
    string model;
    int noOfTyers;

    string getName(){
        return name;
    }

    Vehicle(string _name,string _model,int _noOfTyers){
        cout<<" i am inside vehicle ctor"<< endl;
        this->name = _name;
        this->model = _model;
        this->noOfTyers =_noOfTyers;
    }

    public:
    
    void startEngine(){
        cout<<"engine is starting "<< name << " "<< model << endl;
    }

    void stopEngine(){
        cout<< "engine is stopped "<< name << " "<< model << endl;
    }

};


class Car : public Vehicle{

public:

    int noOfDoors;
    string transmissionType;

    //intiallizing object of car class, we need to intialize the base class data members too because car is inherited from Vehicle class
    //and if we don't intialize them they will be intialized with default values

    
    //intializing base class (vehicle) constructor from child class (car)constructor
    //intializing car specific properties
    Car(string _name,string _model,int _noOfTyers, int _noOfDoors, string _transmissionType) : Vehicle (_name,_model,_noOfTyers)
    {
        cout<<" inside car ctor" << endl;
        this->noOfDoors = _noOfDoors;
        this->transmissionType = _transmissionType;
    }

    void startAc(){
        // cout << " Ac has started of" << getName() <<" " << model << endl; // using getter 
        cout << "Ac has started of " << name <<" " << model << endl; // directly accessing protected member and public member
    } 

};



int main(){
    Car A("ford", "aspire", 4, 4, "manual");
    A.startEngine();
    A.startAc();
    A.stopEngine();
    // cout<<A.getName()<<endl; // error :  we cannot access private member directly, only within class with public getter methods
    // cout<<A.name<<endl; // error: we can access protected member directly only within class
    // cout<< A.getName()<<endl; // we can access protected member directly using getter methods
    return 0;
}



// play with this code to test with different acseesSpecifi ans observe their beheviour

/*
 ### how to implement inheritance in cpp:

    class DerivedClass : accessSpecifier BaseClass {
        // class members
    };

*/


/*
Findings:

    * when subclass is a child of base class , it calls base class's default ctor by default:
        *  when we don't pass arguments to the base class constructor  in the initialization list
        * and base class has a default ctor 

    * if base class has no default ctor,  then we must explictly call the base class constructor in the initialization list
    
    
    
    1.when the child class constructor is called it first calls the base class constructor  and
    intializes the base class data members 
    2.then it intializes the derived class data members 
    3.base class constructor is called only once



    if a data member is private in parent class, we cannot access it directly in child class
    we can access it *only through public getter methods*, that also only with child class


    if a data member is protected in parent class, we can access it directly in child class
    we *can access it directly* within the child class, but not from outside


    if a data member is public in parent class, we can access it directly in child class
    we *can access it directly* within the child class, and also from outside 

*/