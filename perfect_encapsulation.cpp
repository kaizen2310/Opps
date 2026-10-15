
#include <bits/stdc++.h>
using namespace std;

class Student {
private:
    int id;
    string name;
    int age;
    int noofsub;
    float* gpa;
    string gf;

public:
    // Setter
    void setGpa(float a) {
        // layer of authentication
        *this->gpa = a;
    }

    // Getters
    float getGpa() const {
        return *this->gpa;
    }

    int getAge() const {
        return this->age;
    }

    int getId() const {
        return this->id;
    }

    int getNoofsub() const {
        return this->noofsub;
    }

    string getName() const {
        return this->name;
    }

    string getGf() const {
        return this->gf;
    }

    // Constructor
    Student(int id, string name, int age,
            int noofsub, float gpa, string gf) {
        this->id = id;
        this->name = name;
        this->age = age;
        this->noofsub = noofsub;
        this->gpa = new float(gpa);
        this->gf = gf;

        cout << "Constructor called" << endl;
    }

    void study() {
        cout << this->name << " is studying" << endl;
    }

    void sleeping() {
        cout << this->name << " is sleeping" << endl;
    }

    void bunk() {
        cout << this->name << " is bunking the class" << endl;
    }

    // Destructor
    ~Student() {
        delete this->gpa;
        cout << "Destructor called" << endl;
    }

private:
    void gfchatting() {
        cout << this->gf << " is chatting with bf" << endl;
    }
};

int main() {
    Student A(1, "amit", 22, 5, 8.81, "tina");

    cout << A.getGpa() << endl;
    cout << A.getAge() << endl;
    cout << A.getId() << endl;
    cout << A.getName() << endl;
    cout << A.getNoofsub() << endl;
    cout << A.getGf() << endl;

    A.setGpa(9.1);
    cout << "Updated GPA: " << A.getGpa() << endl;

    return 0;
}




/*
    perfect encalsulation:
    - when all the attributes or data members of the class are private
      and they are accessed only through public methods (getters and setters):
    
*/

/* 
    private members are not accessible outside the class:
    - this is problem how to acess private members outside the class:
    - solution is to provide public methods (getters and setters) to access 
    the private members:
    - setters provides lock to the data
    - getters provide data to the user
    
    - setters provides layer of authentication
    - getters provide data without modification
    - 
    */