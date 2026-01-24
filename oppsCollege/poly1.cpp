#include<iostream>
using namespace std;

class student {
    public: 
    string  name;

    student(){
        cout<< "non-parametrized constructor\n";
    }

    student(string name){
        cout<< "parametrized constructor\n";
    }
};

int main(){
// polymorphysim
// constructor overloding
//student s1("tony stark");

// student s1;
// s1.name = " vikas";
student();
    return 0;
}