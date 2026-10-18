#include <iostream>
#include "Bird.h" // importing the Bird.h file to use the Bird class and its derived classes
using namespace std;

void birdDoesSomething(Bird *&bird)
{
    bird->eat();
    bird->fly();
    bird->eat();
    bird->eat();
    bird->fly();
    bird->eat();
    bird->eat();
    bird->fly();
    bird->eat();
    bird->eat();
    bird->fly();
    bird->eat();
    bird->eat();
    bird->fly();
    bird->eat();
}
int main()
{

    Bird *bird = new Sparrow(); // creating a Sparrow object and storing it in a Bird pointer
    birdDoesSomething(bird);    // calling the function with the Bird pointer

    // Bird *bird2 = new eagle(); // creating an eagle object and storing it in a Bird pointer
    // birdDoesSomething(bird2);  // calling the function with the Bird pointer
    
    
    
    Bird * b2 = new Bird();
    // V.IMP interview question: we cannot create an object of an abstract class, so the above line will give a compile time error,
    // because Bird is an abstract class and cannot be instantiated.

    delete bird; // deleting the Sparrow object to free memory

    return 0;
}