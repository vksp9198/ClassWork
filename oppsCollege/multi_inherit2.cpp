#include<iostream>
using namespace std;
 class Student{
   //name , age, roll No.
public:
    string name;
    int age;
    int roll;
    Student(){
        cout<< "\n i am a base class"<< endl;
    }
    void stdInfo(){
    cout << "\n name is : "<< name <<endl;
    cout << " age is : "<< age <<endl;
    cout<< " roll No. is : "<< roll <<endl;
    }
  };
class Teacher{
public:
    string subject;
    double salary;
     Teacher(){
        cout<< " \ni am also a base class"<< endl;
     }   
     void teacherInfo(){
        cout << " \nSubject is : "<< subject <<endl;
        cout << " salary is : "<< salary <<endl;
     }
};
  // new class Grad_student 
 class Grad_student : public Student, public Teacher{
    // name , age, roll , subject, salary, researchArea
    public:
        string researchArea; 
        // constructor
        Grad_student(){
         cout<< "\n i am a derived class"<< endl;
        }
    void gradValue(){
    cout << "\n name is : "<< name <<endl;
    cout << " age is : "<< age <<endl;
    cout<< " roll No. is : "<< roll <<endl;
    cout << " Subject is : "<< subject <<endl;
    cout << " salary is : "<< salary <<endl;
    cout<< " research area is : "<< researchArea <<endl;
    }     
 };

int main(){
     //values for student
     Student s1;
     s1.name = "sujal";
     s1.age = 19;
     s1.roll = 103;
   // calling stdInfo
  s1.stdInfo();

  //  teacher info
  Teacher t1;
  t1.subject = "c++";
  t1.salary = 25000;
  //calling teacherInfo
   t1.teacherInfo();
   Grad_student g1;
   g1.name = " tony stark";
   g1.age = 23;
   g1.roll = 44;
   g1.subject = "programming with c";
   g1.salary = 33000;
   g1.researchArea = "Quantum physics";
//     // cout << " name is : "<< g1.name <<endl;
//     // cout << " age is : "<< g1.age <<endl;
//     // cout<< " roll No. is : "<< g1.roll <<endl;
//     // cout<< " research area is : "<< g1.researchArea <<endl;
 g1.gradValue();
    return 0;
}