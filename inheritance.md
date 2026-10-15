/*

INHERITANCE =>

1.DEFINATION:
*Inheritance is a mechanism that allows one class to inherit properties (attributes and methods)
*of another class
*the class that inherits the properties is called derived class (or child class)
*the class from which the properties are inherited is called base class (or parent class)



when we use inheritance:
    *use inheritance whenever IS-A relationship is identifiedbetween the objects
    
    *inheritance is applied whenever object exhibits a hiraechial relationship,
    signifying a speciallized genralized connection

    *do not reinvent a wheel

    ex - bird IS A animal, truck IS A vehical , car IS A vehical , circal IS A shape , square IS A shape
    
    vehicle - generalized form,
    car - specialized form
    truck - specialized form

    we can also say that generalized term is abstract form of all its specialized forms

modes of inheritence:

    * public members of parent class are accessible from anywhere 
    * private members of parent class are accessible only within the parent class
    * protected members of parent class are accessible only within the parent class and derived classes

    * public members of child class are accessible from anywhere 
    * private members of child class are accessible only within the child class
    * protected members of child class are accessible only within the child class and derived classes

    ex.
    



2.WHY WE USE IT:
*to reuse the code
*to reduce the redundancy
*to provide abstraction
*to provide polymorphism

3. HOW WE USE IT:
*we use inheritance to inherit the properties of one class to another class
*we use inheritance to achieve code reusability
*we use inheritance to achieve polymorphism
*we use inheritance to achieve abstraction

4. EXAMPLE:-
*/

#include <iostream>
using namespace std;

class Animal {
public:
    void eat() {
        cout << "Eating" << endl;
    }
};

class Dog : public Animal {
public:
    void bark() {
        cout << "Barking" << endl;
    }
};

int main() {
    Dog d;
    d.eat();
    d.bark();
    return 0;
}