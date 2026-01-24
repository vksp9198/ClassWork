#include<iostream>
using namespace std;
// Example of abstraction (atm base class , withdraw derived class1 and deposit derived , transaction).
class Atm{
    public:
     virtual void transaction();
};
//derived class
class Withdraw : public Atm{
    public:
    void transaction(){
    cout << "money withdraw" <<endl;
    }
};
class Deposit : public Atm{
    public:
   void transaction(){
    cout << "money deposit" <<endl;
    }
};
int main(){

Atm *a;  // *a = this is the base class pointer .
Withdraw w1; // w1 = this is the object of derived class
Deposit d1;  // d1 = this is the object of derived class

a = &w1;
a -> transaction();  // point to the address of base class function

a = &d1;
a -> transaction();

    return 0;
}