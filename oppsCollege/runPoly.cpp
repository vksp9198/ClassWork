#include<iostream>
using namespace std;
// Virtual functions: A Virtual function is a member function
// that you execept to be redefined in derived classes.
// 1. Virtual functions are dynamic in nature.
// 2. defined by the keyword "virtual" inside
// a base class and are always declare with base class and
// overriden in a child class.
// 3. A virtual function is called during the runtime. 

// best example : employee and salary

class Employee{
    public: 
     virtual void salary(){
        cout << "basic salary: 30000" << endl;
    }
};

class Manager : public Employee{
    public:
    void salary(){
        cout << " manager salary: 90000"<< endl;
    }  
};
class Developer : public Employee{
    public:
    void salary(){
        cout << " developer salary: 60000"<< endl;
    }  
};

int main(){

Employee *e;
// Employee e1;
// e1.salary();
Manager m;
Developer d;
Employee e1;

e = &e1;
e -> salary();

e = &m;
e -> salary();

e = &d;
e -> salary();

    return 0;
}