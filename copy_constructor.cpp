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
    //parameterized ctor:
    Student(string name , int age, int height, int weight){
        this->name = name;
        this->age = age;
        this->height = height;
        this->weight = weight;
        cout<<"parameterized constructor called"<<endl;
    }
    
    //copy constructor : used to create a copy of an object :

    Student (const Student &temp){
        this->name = temp.name;
        this->age = temp.age;
        this->height = temp.height;
        this->weight = temp.weight;
        cout<< "copy constructor called" << endl;
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

    // Student temp("shree",23, 54, 45); //stack
    // Student A("shree",23, 176, 73); //stack

    // //copy constructor:
    // Student copyConstructor = temp;//copy constructor
    // Student copyConstructor(temp);//copy constructor
    // cout<< copyConstructor.name <<" "<< copyConstructor.age << endl;

    //dynamic allocation or Student pointer;// heap
    Student *A = new Student("mbappe" ,27 , 180, 65);
    cout<< A-> name <<" "<< A->age<<" "<< A->height <<" "<<A->weight<<endl;
    A->study();
    delete A;

    return 0;
}

/*
notes:

if you are using dynamic allocation then , you could have notice that default deconstructor is not getting called
in dynamic memory allocation, if you construct a class manually then you should also destruct it manually.

use delete keyword to destruct manually:
delete A;
*/