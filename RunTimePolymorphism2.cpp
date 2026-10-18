#include <iostream>
using namespace std;

//upcasting and downcasting

class Shape {//final
    public:

    virtual void draw() // final 
    {
        cout<< " Generic drawing ..."<<endl;
    }
};

class Circle : public Shape{
    public:

    void draw() {
        cout<< " Circle drawing ..."<<endl;
    }
};

class Rectangle : public Shape{
    public:

    void draw() {
        cout<< " Rectangle drawing ..."<<endl;
    }
};

class Triangle : public Shape{
    public:

    void draw() {
        cout<< " Triangle drawing ..."<<endl;
    }
};

void shapeDrawing(Shape *s){
    s->draw(); // draw is polymorphic
}

int main(){
    //stack
    // Circle c;
    // Rectangle r;
    // Triangle t;
    // shapeDrawing(&c);
    // shapeDrawing(&r);
    // shapeDrawing(&t);

    // w/0 virtual keyword.
    Shape *s = new Shape();
    s->draw();

    //upcasting: upcasting ka matlab hua app child ka object bana rahe ho and parent main store kar rahe ho.
    Shape *s2 = new Circle();
    s2->draw();
    //parent ke andar child store hai
    // child ka object bana lekin fir bhi method parent ki call hua (child ka nahi), problem
    //agar virtual keyword use karenge toh yeh issue solve hojayega

    Circle *c = new Circle();
    c-> draw();

    // Downcasting: downcasting ka matlab hua app parent class ka object bana rahe ho and usko child class mai store kar rahe ho.
    Shape *s3 = new Shape();
    Circle *c2 = (Circle *)s3;
    c2-> draw();
    //child ke andar parent store hai
    // parent ka object bana lekin fir bhi method child ki call hue (parent ka nahi), problem
    //agar virtual keyword use karenge toh yeh issue solve hojayega


    return 0;
}

/*
    W/0 virtual keyword:
     left mai joh likha hai,
     jiske object mai actual object store hai

     class A = new class..somehitng ..something.
     so is case mai ledt side yani A ka object call hoga


     with virtual 
        jisko ham ne store kiya hi uska object call hoga
        as we have intended to use.

*/

/*
learn about run-time polymorphism:
- It allows a program to determine which version of a virtual function to call at runtime.
- This is achieved through the use of virtual functions and base class pointers.
- The correct function is called based on the actual type of the object, not the type of the pointer.

* Upcasting and downcasting:
    - Upcasting is the process of converting a derived class object to a base class object.
    - Downcasting is the process of converting a base class object to a derived class object.
    - Upcasting is generally safe and automatic.
    - Downcasting can be unsafe and may require explicit casting, as it can lead to undefined behavior if the object is not actually of the derived type.

    * Virtual functions:
    - A virtual function is a member function in the base class that you expect to override in derived classes.
    - When you use a base class pointer to call a virtual function, C++ determines which function to call based on the actual object type at runtime.
    - This mechanism is known as dynamic dispatch or late binding.
    - If a function is not declared as virtual, the function call is resolved at compile time (static binding), and the base class version of the function will be called, even if the object is of a derived class.

    * final keyword:
    - The final specifier is used to prevent further overriding of a virtual function in derived classes.
    - A function declared as final cannot be overridden in any derived class.
    - The final keyword can also be used with classes to prevent them from being inherited.
    - the final keyword can also be used within methods to prevent them from being overridden in derived classes.
    -The final keyword is useful for design decisions where you want to restrict further modifications to a class or function.


*/