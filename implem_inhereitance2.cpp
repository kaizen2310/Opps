#include <iostream>
#include <string>
using namespace std;

class Vehicle{

protected:
    string name;
public:
    string model;
    int noOfTyers;

    Vehicle(string _name, string _model, int _noOfTyers){
        cout<<"i am inside vehicle ctor"<< endl;
        this->name = _name;
        this->model = _model;
        this->noOfTyers = _noOfTyers;
    }

    void startEngine(){
        cout<<"engine is starting"<< name << " " << model << endl;
    }
    void stopEngine(){
        cout<<"engine is stopped"<< name << " " << model << endl;
    }

    ~Vehicle(){
        cout<<"i am inside vehicle dtor"<< endl;
    }
};

class Car : public Vehicle{
    public:
    int noOfDoors;
    string transmissionType;

    Car(string _name, string _model, int _noOfTyers, int _noOfDoors, string _transmissionType) : Vehicle(_name, _model, _noOfTyers){
        cout<<"inside car ctor"<<endl;
        this->noOfDoors = _noOfDoors;
        this->transmissionType = _transmissionType;
    }

    void startAc(){
        cout<<"Ac has started of "<< name << " " << model << endl;
    }

    ~Car(){
        cout<<"i am inside car dtor"<< endl;
    }
};

class MoterCycle : public Vehicle{
    public:
    int noOfDoors;
    string transmissionType;

    MoterCycle(string _name, string _model, int _noOfTyers, int _noOfDoors, string _transmissionType) : Vehicle(_name, _model, _noOfTyers){
        cout<<"inside MoterCycle ctor"<<endl;
        this->noOfDoors = _noOfDoors;
        this->transmissionType = _transmissionType;
    }

    void wheelie(){
        cout<<"wheelie kar rahi hai "<< name << " " << model << endl;
    }

    ~MoterCycle(){
        cout<<"i am inside MoterCycle dtor"<< endl;
    }
};


int main(){
    Car A("ford", "aspire", 4, 4, "manual");
    A.startEngine();
    A.startAc();
    A.stopEngine();
    

    MoterCycle B("ktm", "duke", 2, 2, "manual");
    B.startEngine();
    B.wheelie();
    B.stopEngine();
    return 0;
}



/*
    derived class constructor will call the base class constructor first and then it will call the derived class constructor
    derived class destructor will call the derived class destructor first and then it will call the base class destructor
*/

//  when we create a object of child class it forst calles the parent class's constructor and intializes the data members
// and then it intializes the child class's data members
// and when we deconstruct the object of child class it first deconstruct the child class's data members and then the parent class's data members

/*
protected chize - protected ke trah hi inheriated hongi 
private chize - private ke trah hi inheriated hongi
public chize - public ke trah hi inheriated hongi

ex.

1. public se inherit kiya: 
    * protected -> protected
    * private -> private
    * public -> public

2. protected se inherit kiya: 
    * protected -> protected
    * private -> private
    * public -> protected

3. private se inherit kiya: 
    * protected -> private
    * private -> private
    * public -> private

*/