#include <bits/stdc++.h>
using namespace std;


class Employee{ 

public:
    string name; 
    int empId;

    Employee(string _name, int _empId){
        cout<<"i am inside employee ctor"<< endl;
        this->name = _name;
        this->empId = _empId;
    }
    
    void display() const{
        cout<<"name: "<< name << " empId: " << empId << endl;
    }
};

class Developer : public Employee{

private:
    string programmingLang;

public:

    Developer(string _name, int _empId, string _programmingLang) : Employee(_name,_empId){
        this->programmingLang = _programmingLang;
    }

    void show() const{
        display();
        cout << "specialized developer in programming language : "<< programmingLang << endl;
    } 

};


int main(){

    //single inheritance
    Developer A("shreeparth" , 23 ,"C++");
    A.show(); // can be accessed : defined within developer class ,, Private means accessible within the same class
    //Remember this rule: A getter or setter is not required to use a private variable. 
    //It is required only when you want to expose controlled access to that variable from outside the class.
    // cout << A.programmingLang << endl; // error
    return 0;

    //multiple Inheritance

}

