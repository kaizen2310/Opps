#include "bits/stdc++.h"
using namespace std;

class Student{

public:
    //-------- from here ----//
    int id;
    string name;
    int age;
    int noofsub;
    //--------to here are public

private:
// ------from here ------
    float *gpa;
    string gf;   
//--------to here is private

public:
    //constructor : 
    Student(int id, string name, int age,int noofsub, float gpa,string gf){
        this->id = id;
        this->name=name;
        this->age = age;
        this->noofsub = noofsub;
        this->gpa= new float (gpa);
        this->gf=gf;
        cout << "Constructor called" << endl;
    }

    void study(){
        cout << this->name << " is studying" << endl;
    }

    void sleeping(){
        cout << this->name << " is sleeping" << endl;
    }

    void bunk(){
        cout<< this->name<< " is bunking the class"<<endl;
   
    }
    ~Student(){
        cout << "Destructor called" << endl;
    }

private:
    void gfchatting(){
        cout<< this->gf<< " is chatting with bf"<<endl;
    }
};


int main(){
    Student A(1,"amit",22, 5, 8.81 , "tina");
    A.sleep();
    A.gfchatting();

    return 0;
}




/*
    perfect encalsulation:
    - when all the attributes or data members of the class are private
      and they are accessed only through public methods (getters and setters):
    
*/

/* 
    private members are not accessible outside the class:
    - this is problem how to acess private members outside the class:
    - solution is to provide public methods (getters and setters) to access 
    the private members:
    */