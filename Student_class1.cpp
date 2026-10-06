#include "bits/stdc++.h"
using namespace std;

class Student{
public:
    int id;
    string name;
    int age;
    int rollno;
     
    //ctor called;
    Student(){ 
        cout<<"Default Constructor called"<<endl;
    }

    // parameterized constructor
    Student(int id, string name, int age, int rollno){
        //setting up object state using "this" keyword:
        this->id = id;
        this->name = name;
        this->age = age;
        this->rollno = rollno;
        cout<<"Parameterized Constructor called"<<endl;
    }

    void study(){
        cout<<this->name<<" is studying"<<endl;
    }

    void sleep(){
        cout<<this->name<<" is sleeping"<<endl;
    }

    void eating(){
        cout<<this->name<<" is eating"<<endl;
    }

    ~Student(){
        cout<<"default destructor called"<<endl;
    }
};

int main(){
    // A is ia instance of Student class : 
    // Student A;
    // A.id = 23;
    // A.name = "shree";
    // A.age = 20;
    // A.rollno = 23;
    // A.study();
    // A.sleep();
    // A.eating();

    // messy code thats why we use parameterized constructor usually:

    Student A(1,"shree",20,23);
    Student B(2,"parth",21, 24);
    
    cout << A.name << " " << B.name << endl;
    A.eating();
    B.sleep();
    return 0;
}
