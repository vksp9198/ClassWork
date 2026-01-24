#include<iostream>
using namespace std;

//This is the best example fo inheritence
// Inheritence using parameters
class person{
public: 
    string name; 
    int age; 
    string address;

    //constructor
    person(string name, int age, string address){
        cout<< " i am a constructor "<< endl;
        this -> name = name;
        this -> age  = age;
        this -> address = address; 
    }
};
 //  New class 
class student : public person{
    // name , age , address and roll
    public:
    int roll;
    student(string name, int age , string address, int roll): person(name , age, address){
        this -> roll = roll;
        cout<< "i am child constructor"<<endl;
    }
    void getInfo(){
    cout << "name is: "<< name <<endl;
    cout << "age is: " << age <<endl;
    cout << "address is: " << address <<endl;
    cout << "roll is: " << roll <<endl;
    }

};

int main(){
// values for person
    person p1("vikas", 19 ,"kk");
    cout << "name is: "<< p1.name <<endl;
    cout << "age is: " << p1.age <<endl;
    cout << "address is: " << p1.address <<endl;
// vlaues for student
    student s1("ritik", 19,"azm",1999);
   //  printin values using function calling.
    s1.getInfo();

   // without functio calling
    // cout << "name is: "<<s1.name <<endl;
    // cout << "age is: " <<s1.age <<endl;
    // cout << "address is: " <<s1.address <<endl;
    // cout << "roll is: " <<s1.roll <<endl;

   //pending or maybe incomplete 
    
    return 0;
}