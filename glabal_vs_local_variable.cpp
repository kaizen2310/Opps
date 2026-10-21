#include <bits/stdc++.h>
using namespace std;

int x  =  2; // global variable;

void fun(){
    cout << ::x<< endl;

}
int main (){

    x = 3; // global variable;
    //
    ::x = 4; // global variable;
    
    int x = 5; // local variable;
    cout << "local variable: " << x << endl;
    cout << "global variable: " << ::x << endl;
     // :: is the scope resolution operator, it is used to access the global variable when there is a local variable with the same name.


    {
        
        int x = 10; // local variable;
        {
            int x = 15; // local variable;
            // local variable are created in the stack memory, so they are destroyed when the block is exited.
            // they are only accessible within the block where they are defined.
            cout << x << endl;
            cout << ::x << endl;
        }
        cout << x << endl;
        cout << ::x << endl;
    }
     
    return 0;
}