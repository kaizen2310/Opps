#include "bits/stdc++.h"
using namespace std;


class Student{
public:
    int id;
    string name;
    int age;
    int rollno;
    int *gpa;

    //pointer dynamic allocation
     
    // //ctor called;
    // Student(){ 
    //     cout<<"Default Constructor called"<<endl;
    // }

    // parameterized constructor
    Student(int id, string name, int age, int rollno, int gpa){
        this->id = id;
        this->name = name;
        this->age = age;
        this->rollno = rollno;
        this->gpa = new int (gpa); 
        //why : int gpa is pointer but here we are 
        //passing an int value, so we are creating a new int
        // and storing the value of gpa in it and assigning 
        // the address of it to gpa pointer:

    }

    void study(){
        cout<<this->name<<" is studying"<<endl;
    }


    ~Student(){
        cout<<"default destructor called"<<endl;
        delete this->gpa;
        //to prevent memmory leak we should always 
        //deallocate the dynamically allocated memory
    }
};

int main(){

    Student *A = new Student(10, "mbappe" , 27 , 7 , 8.8);

    cout << A->name <<endl;
    cout << A->age <<endl;
    cout << A->id <<endl;
    cout << A->rollno <<endl;
    cout << A->gpa <<endl; // to get address of gpa we use 
    cout << *(A->gpa) <<endl; //to get value of gpa we use dereferencing : 

    delete A;
    
    return 0;
}

/*
what we learned in this module:
* we also came to know that default destructor is not called in case of dynamic memory allocation so we need to call it manually:

* in clase of normal constructor deconstructor is atomatically called ,but looking closely at the output we can see that
* deconstructor is not called actually for gpa pointer
* its dynamically allocated so we need to destruct it manually :-

* if not this leads to memmory leak or we eill lose the reference to the memory location where the gpa pointer is pointing
* and this leads to memory leak



* how to allocate memory in heap using new keyword in case of object
* how to access the members of object created in heap using arrow operator -> instead of dot operator .
* how to deallocate memory in heap using delete keyword in case of object

*/
