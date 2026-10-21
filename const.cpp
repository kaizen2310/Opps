#include "bits/stdc++.h"
using namespace std;

class abc{
    int x;
    int *y;
    int z;
    int w;

    public:
    //constructor:
    abc(){
        x = 0;
        y = new int(0);
    }
    //old style:
    abc(int _x, int _y , int _z = 0 , int _w = 5){ // _z and _w are default parameters, if we dont pass them then they will take the default value.
        x = _x;
        y = new int(_y);
        z = _z;
        w = _w;
    }

    //initializer list style:
    abc(int _x, int _y , int _z = 0 , int _w = 5): x(_x), y(new int(_y)), z(_z), w(_w)
    {
        cout<< "in init list" << endl;
    }
    // in this we cannot reinitialize the member variables in the constructor body, we have to use initializer list to initialize them.
    // this is called initializer list, it is used to initialize the member variables of the class. It is more efficient than the old style,
    // because it avoids the overhead of calling the constructor of the member variables.


    int getX() const{
        // x =50;
        return x;
    }

    void setX(int _val){
        x = _val;
    }


    void setY(int _val){
        int f =20;
        delete y;
        y = new int(f); // this will give an error, because we are trying to assign the address of a local variable to a pointer, which will be destroyed after the function ends.  
        *y = _val;
    }

    int getY() const{
        return *y;
    }

    int getZ() const{
        // z = 50; // this will give an error, because we are trying to change the value of a member variable in a const function.
        return z;
    }


    int getW() const{
        // w = 50; // this will give an error, because we are trying to change the value of a member variable in a const function.
        return w;
    }

};
void printABC(const abc &a){
    cout << a.getX() << " " << a.getY() <<  " " << a.getZ() << " " << a.getW() << endl;
}
//due to const reference, we cannot change the value of the object a in the function printABC, and we can only access the member functions of the class abc that are declared as const.


int main(){

    abc a(1, 2);
    // abc a(1, 2, 3);
    // abc a(1, 2, 3, 4); will override the default value of z and w, and will take the values passed in the constructor.
    printABC(a);
    return 0;;
}

//learnings from this code:
// 1  if you want to write a function in which you dont want to change the value of the object, then you can make that function as const function.
// 2 if you want to pass an object to a function, and you dont want to change the value of the object, then you can pass that object as const reference.







// int main2()
// {
//     // const int x = 10; // x is a constant.
//     //initialization of can be done,
//     // but it cannot be changed later in the program.
//     //x = 20; // this will give an error, because x is a constant

//     // int *p = &x;
//     // *p = 20;
//     // cout << x << endl; // this will print 20, because we have changed the value of x using pointer p.
//     // // is method is used to work in old compilers, 
//     // //but it is not a good practice to change the value of a constant using pointer, because it can lead to undefined behavior.
    

//    // 2.const with pointers:
//     // int * a =  new int; // CONST DATA, NON-CONST POINTER
//     // *a = 10;
//     // cout << *a << endl; // this will print 10, because we have assigned

//     // // delete a; // this will free the memory allocated to a, and we can use it again.
//     // int b = 5;
//     // a = &b; // this is allowed, because we are changing the address of the pointer a, not the value it is pointing to.
//     // cout << *a << endl; // this will print 5, because we have changed
//     // // explanation : We are changing the address that the pointer a is pointing to, not the value at that address.
//     // //memory leak is created because we have lost the address of the memory allocated to a, and we cannot free it now.

//     // CONST DATA, NON-CONST POINTER
//     // const int *a = new int(2); // CONST DATA, NON-CONST POINTER
//     // int const *a = new int(2); // same as line number 32 (diffrent way or writing the same thing same meaning).
//     // cout << *a << endl; // this will print 2, because we have assigned 2 to the memory location pointed by a.
//     // *a = 10; // this will give an error, because we cannot change the value of a constant pointer.
//     // cout << *a << endl; // this will print 2, because we cannot change the value of a constant pointer.
//     // int b = 5;
//     // a = &b; // this is allowed, because we are changing the address of the
//     // cout << *a << endl; // this will print 5, because we have changed the address of the pointer a, not the value it is pointing to.  
    
//     // CONST POINTER, NON-CONST DATA
//     // int * const a = new int(2); // CONST POINTER, NON-CONST DATA
//     // cout << *a << endl; // this will print 2, because we have assigned 2 to the memory location pointed by a.
//     // *a = 10; // this is allowed, because we are changing the value at
//     // // the memory location pointed by a, not the address of the pointer a.
//     // cout << *a << endl; // this will print 10, because we have changed the value at the memory location pointed by a.
//     // int b = 5;
//     // // a = &b; // this will give an error, because we cannot change the address of a constant pointer.
//     // cout << *a << endl; // this will print 10, because we cannot change the address of a constant pointer.  
    
//     //Const POINTER, CONST DATA
//     const int * const a = new int(2); // CONST POINTER, CONST DATA
//     cout << *a << endl; // this will print 2, because we have assigned 2 to the memory location pointed by a.
//     // *a = 10; // this will give an error, because we cannot change
//     // the value at the memory location pointed by a, because it is a constant pointer.
//     // int b = 5;
//     // a = &b; // this will give an error, because we cannot change the address of a constant pointer.
//     // cout << *a << endl; // this will print 2, because we cannot change the address of a constant pointer.


//     return 0;
// }


//learnings from this code:
// 1. const keyword is used to declare a constant variable, which cannot be changed after
// initialization.
// 2. When a pointer is declared as const, it means that the pointer itself cannot be changed to point to a different memory location, but the value at that location can be changed.
// 3. When a pointer is not declared as const, it means that the pointer itself can be changed to point to a different memory location, and the value at that location can also be changed.

// 4 if you write const before  * that means the data will be constant and  the pointe can be changed to point to a different memory location.

// 5 If you write const after  * that means the pointer will be constant and the data can be changed.

// 6 If you write const before and after * that means both the data and the pointer will be constant, and neither can be changed.

//7 In C++, the const keyword can be used in different ways to create constant variables, constant pointers, and constant data. The placement of the const keyword determines whether it applies to the pointer itself or the data it points to.