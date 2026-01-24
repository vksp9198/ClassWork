#include<iostream>
using namespace std;
class Student{
    public:
       string name;
       float age;
       int roll;
    // create a constructor
    Student(){
        cout<<" I am a constructor!! \n";
        roll = 117;
        name = "vikas";
    }
    // one more constructor ,this is called parametrized constructor because
   // in this constructor we can pass some parameter
     Student (string name , float age ,int roll){
        this -> name = name;
        this -> age = age;
        this -> roll = roll;
     }     
    void getInfo(){
        cout << "Name is : "<< name <<endl;
        cout << "Age is : "<< age <<endl;
        cout << "Roll is : "<< roll <<endl;
    }
    
};
int main(){
    // Student sobj("vikas", 19 ,117);
    // sobj.getInfo();
    Student sobj1;
     //sobj1.name = "Ritik";
     sobj1.age = 19;
     sobj1.getInfo();
    return 0;
} 