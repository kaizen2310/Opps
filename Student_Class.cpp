#include "bits/stdc++.h"
using namespace std;

class Student
{
public :
    // atttributes :
    string name;
    int age;
    int height;
    int weight;

    //ctor : default  constructor :
    Student(){
        cout<<"Constructor called"<<endl;
    }

    //behaviours / methods / functions:
    void study(){
        cout<<this-> name<< " is reading a book"<<endl;
    }

    void sleep(){
        cout<<this-> name<< " is sleeping"<<endl;
    }
    
    void eating(){
        cout<<this->name<< " is eating a chicken"<<endl;
    }

    //both constructor and destructor are called by default :-

    //destructor :
    ~Student(){
        cout<<"Destructor called"<<endl;
    }
};

int main(){

    Student s1;
    s1.name = "shree";
    s1.study();
    s1.sleep();
    s1.eating();

    return 0;
}


//Notes:
//compiler by itself create a default constructor and destructor , if you not provide it yourself :
//this keyword : is used to point current object :

//deconstructor is call when program goes out of scope : //or when program ends :
//copy constructor : it is a special type of constructor that create a copy of an object :
