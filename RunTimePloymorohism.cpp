#include <iostream>
using namespace std;

// test this code with virtual keyweord in draw method of shape class to make it polymorphic
// and without virtual keyword to see the difference in output


/*
    * Virtual functions:
    - A virtual function is a member function in the base class that you expect to override in derived classes.
    - When you use a base class pointer to call a virtual function, C++ determines which function to call based on the actual object type at runtime.
    - This mechanism is known as dynamic dispatch or late binding.
    - If a function is not declared as virtual, the function call is resolved at compile time (static binding), and the base class version of the function will be called, even if the object is of a derived class.
*/  
class Shape{
    public:

    virtual void draw(){
        cout<< " Generic drawing ..."<<endl;
    }

    //virtual keyword is used to make the draw method polymorphic,
    // so that it can be overridden in derived classes and the correct method is called at runtime based on the actual object type,
    // rather than the pointer type.
};


class Circle : public Shape{
    public:

    void draw() override{
        cout<< " Circle drawing ..."<<endl;
    }
    // override keyword is used to indicate that the draw method is intended to override a virtual method in the base class,
    // of we use override without , virtual keyword in base class then it will give compile time error, so it is a good practice to use override keyword in derived class
};

class Rectangle : public Shape{
    public:

    void draw() override{
        cout<< " Rectangle drawing ..."<<endl;
    }
};

class Triangle : public Shape{
    public:

    void draw() override{
        cout<< " Triangle drawing ..."<<endl;
    }
};

void shapeDrawing(Shape *s){
    s->draw(); // draw is polymorphic
}

int main(){
    //stack
    Circle c;
    // c.draw();
    Rectangle r;
    // r.draw();
    Triangle t;
    // t.draw()    ;
    
    shapeDrawing(&r); // instead of draw method of rectangle its calling draw method of shape
    shapeDrawing(&c);   // instead of draw method of circle its calling draw method of shape
    shapeDrawing(&t);   // instead of draw method of triangle its calling draw method of shape

    // this happens due to compile time binding, which binds the draw method of shape class to the object of shape class at compile time,
    // so it is not polymorphic
    
    // this is happening because of draw method of shape class is not virtual so it is not polymorphic
    // to make it polymorphic we need to make draw method of shape class virtual

    //heap
    // Triangle *t = new Triangle();
    // shapeDrawing(t);
    //or another way of writing
    // Triangle t;
    // Shape *s = &t;

    return 0;
}


/* learnings:
1. Virtual functions are used to achieve runtime polymorphism.
2. The virtual keyword in the base class allows derived classes to override the function.
3. The override keyword in the derived class indicates that the function is intended to override a virtual function in the base class.
4. When a virtual function is called through a base class pointer, the actual object's type determines which version of the function is called.
5. If a function is not declared as virtual in the base class, it cannot be overridden in derived classes, and static binding will be used instead of dynamic binding.
*/