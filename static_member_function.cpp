#include <bits/stdc++.h>
using namespace std;

class abc{
    public :
    int x,y;

    abc(): x(0),y(0){} //constructor to initialize the values of x and y to 0

    static void print(){
        //no this pointer accessible in static member function
        printf("i am in static %s \n", __FUNCTION__);
    }
};



int main(){
    abc obj1;
    obj1.print();
    abc::print();
    abc obj2;
    obj2.print();
    abc::print();

    //same output

    return 0;
}

/**
 * Learnings from this code:
 * //no (this) pointer in static member function
 *
 * 1. Static member functions are called using the class name and the scope resolution operator (::).
 * 2. Static member functions can only access static data members and other static member functions.
 * 
 * 3. Static member functions do not have access to the `this` pointer.
 * 4. Static member functions are called on the class itself, not on any instance of the class.
 *
 *  tatic member functions :
     A static member function belongs to the class itself, not to any specific object.
     It can be called using the class name and the scope resolution operator (::).
     Static member functions can only access static data members and other static member functions.

 */