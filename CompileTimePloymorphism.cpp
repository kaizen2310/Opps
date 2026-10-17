#include <iostream>
#include <string>
using namespace std;


// function overleading:
class Add{
public:
    int sum(int x , int y){
        cout<< "Sum of 2 int" << endl;
        return x + y;
    }

    int sum(int x, int y, int z){
        cout<< "Sum of 3 int" << endl;
        return x + y + z;
    }

    double sum(double x, double y){
        cout << "Sum of 2 doubles"<<endl;
        return x+y;
    }

};

//operator overloading
class Complex{
public:
    int real;
    int imag;

    // defalut constructor
    Complex(){
        real = imag = -1;  
    }

    //initialization list constructor
    Complex(int r, int i) : real(r), imag(i) {};


    Complex operator +(const Complex & obj){
        Complex temp;
        temp.real = obj.real + this->real;
        temp.imag = obj.imag + this->imag ;
        return temp;
    }

    Complex operator - (const Complex &obj){
        Complex temp;
        temp.real = this->real - obj.real;
        temp.imag = this->imag - obj.imag;
        return temp;
    }

    bool operator == (const Complex &obj){
        return (this->real == obj.real) && ( this->imag == obj.imag);
    }

    void print(){
        printf("[%d + i%d]\n", this->real, this->imag); //current object is accessed using this pointer
    }
};



int main(){

    Complex A(2,5);
    A.print();
    Complex B(3,4);
    B.print();


    // Complex C = A + B; // operator overloading,
    // this will throw an error because we have not defined the operator + for the class Complex
    // we can add real+real, double+double , int +int , that also is a kind of overloading with different arguments but
    //  we cannot add two objects of class Complex because the compiler does not know how to add them
    // we can overload the operator + for the class Complex by defining a member function operator+() or a friend function operator+()

    Complex C = A + B; // operator overloading, this will call the operator+() function defined in the class Complex
    C.print();
    // its like - A ke ander B ki value dalo using functions  A.sum(B)
    Complex D = A - B;
    D.print();


    // bool a = 5==5;
    // cout << a << endl;

    Complex X(2,2);
    Complex Y(2,2);

    bool a = X == Y;  
    cout << a<< endl;
    // int x =2,y=3;
    // int z =5;


    // Add add;
    // cout << add.sum(x,y)<<endl;
    // cout << add.sum(x,y,z)<<endl;
    // cout << add.sum(5.7, 9.2)<<endl;
    return 0;
}