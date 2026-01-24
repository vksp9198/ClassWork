#include<iostream>
using namespace std;
class person{
 public:
    string name;
    double age;
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
 class Grad_student : public student{
    public:
        string researchArea; 
        void getvalue(){
    cout << " name is : "<< name <<endl;
    cout << " age is : "<< age <<endl;
    cout<< " roll No. is : "<< roll <<endl;
    cout<< " research area is : "<< researchArea <<endl;
    }     
 };

int main(){
     // values for student
//      student s1;
//      s1.name = "sujal";
//      s1.age = 19;
//      s1.roll = 103;
//    // calling getInfo
//   s1.getInfo();
  Grad_student g1;
  g1.name = " tony stark";
  g1.age = 23;
  g1.roll = 44;
  g1.researchArea = "Quantum physics";
    // cout << " name is : "<< g1.name <<endl;
    // cout << " age is : "<< g1.age <<endl;
    // cout<< " roll No. is : "<< g1.roll <<endl;
    // cout<< " research area is : "<< g1.researchArea <<endl;
g1.getvalue();
    return 0;
}