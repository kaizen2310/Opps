#if !defined(BIRD_H)
#define BIRD_H
#include <iostream>
// abstract class
//abstract class in cpp is known as a interface.
class Bird{

public:
    virtual void fly() = 0; // pure virtual function
    virtual void eat() = 0; // pure virtual function

    // classes that inherits from Bird class (has to/must) implement the fly and eat methods,
    // otherwise they will also be abstract classes and cannot be instantiated.
};


class Sparrow : public Bird{
    public:
    void eat(){
        std::cout << "Sparrow is eating" <<std::endl;
    }
    void fly(){
        std::cout << "Sparrow is flying" << std::endl;
    }
};

class eagle : public Bird{
    public:
    void eat(){
        std::cout << "Eagle is eating" << std::endl;
    }
    void fly(){
        std::cout << "Eagle is flying" << std::endl;
    }
};
class pigeon : public Bird{
    public:
    void eat(){
        std::cout << "Pigeon is eating faster" << std::endl;
    }
    void fly(){
        std::cout << "Pigeon is flying faster" << std::endl;
    }
};


#endif // BIRD_H
