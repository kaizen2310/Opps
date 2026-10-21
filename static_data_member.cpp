#include <iostream>
using namespace std;

class abc{
    public:
    //int x,y
    static int x,y; //static data members are shared among all objects of the class,
    // meaning that there is only one copy of the static member for the entire class,
    // regardless of how many objects are created.

    static void print(){
        cout << "x: " << x << " y: " << y << endl;
    }


};


int main(){

    // abc obj1;
    // obj1.x = 5;
    // obj1.y = 10;
    // obj1.print();

    // abc obj2;
    // obj2.x = 15;
    // obj2.y = 20;
    // obj2.print();

    // obj1.print();
    // obj2.print();

    return 0;
}


/*
learnings from this code:
1. The `static` keyword in C++ is used to specify that a variable or function has static storage duration,
 meaning it is allocated once and persists for the entire program execution.

     static data member : 
     A static data member is shared among all objects of the class.
     It is initialized only once, and its value is the same for all objects.
     Static data members are accessed using the class name and the scope resolution operator (::).



*/