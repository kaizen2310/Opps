#include <iostream>
using namespace std;

#define PI 3.14159465
#define maxx(a,b) ((a>b)?a:b)
float circleArea(float radius){
    return PI * radius * radius;
}

float circleperimeter(float radius){
    return 2 * PI * radius;
}

void printMax(int a, int b){
    cout << "Max of " << a << " and " << b << " is: " << maxx(a,b) << endl;
}

int main(){
    cout << circleArea(65.8) << endl;
    cout << circleperimeter(65.8) << endl;
    printMax(5, 10);
    return 0;
}

/*leanings from this code:
 1. Macros are used to define constants, which can be used throughout the program
 how it works : when the preprocessor encounters a macro, it replaces the macro with its value before the compilation of the code begins.
 This means that the value of the macro is substituted in place of the macro name wherever it is used in the code.



 */