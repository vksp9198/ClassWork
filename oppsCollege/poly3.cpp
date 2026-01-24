#include<iostream>
using namespace std;
// RUN TIME polymorphisim: (dynamic)--->
// function overriding: parent and child both contain the same
// function with different implimentation.the parent class function
// is said to be orverridden.

class parent{
    public:
        void getInfo(){
                cout<< " parent class" << endl;
        }
};
class child : public parent{
    public:
    void getInfo(){
            cout<< " child class" << endl;
        }
};

// Animal sound()  run time polymorphisim
class Animal{
    public:
    void sound(){
       cout << " base class sound !!" ;
    }
};

class dog : public Animal{
    public:
        void sound(){
            cout<< " dog = barking"<<endl;
        }
};
class cat : public Animal{
    public:
        void sound(){
            cout<< " cat = meow meow "<<endl;
        }
};
class cow : public Animal{
    public:
        void sound(){
            cout<< " cow = high volume"<<endl;
        }
};
int main(){
    // child c1;
    // c1.getInfo();
    // parent p1;
    // p1.getInfo();
    // Animal a1;
    // a1.sound();
    dog d1;
    d1.sound();
    cat c1;
    c1.sound();
    cow cow1;
    cow1.sound();
    return 0;
}