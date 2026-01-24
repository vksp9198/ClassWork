#include<iostream>
using namespace std;

class person{
  public:
    string name;
    double age;
     
    //constructor created by own.
    // person(string name , double age){
    //     this -> name = name;
    //     this -> age = age;
    // }
    // this is the normal and defalut constructor.
     person(){
     }
     
};
  // new class student 
 class student : public person {
   //name , age, roll No.
public:
    int roll;
    void getInfo(){
    cout << " name is : "<< name <<endl;
    cout << " age is : "<< age <<endl;
    cout<< " roll No. is : "<< roll <<endl;
    }
   
  };
 

int main(){
    // Inheritence : when properties and memeber function
    // of base class are passed on the derived class. (parent to child)

    person p1;
     p1.name = "vikas";
     p1.age = 19;
     cout << " name is : "<< p1.name <<endl;
     cout << " age is : "<< p1.age <<endl;

     // values for student
     student s1;
     s1.name = " sujal";
     s1.age = 19;
     s1.roll = 103;
   // calling getInfo
  s1.getInfo();   // we can also pass the values throgh parameters
    return 0;
}