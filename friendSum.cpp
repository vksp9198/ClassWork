#include<iostream>
using namespace std;
// class 1
 class Student1;
class Student{
    private:
        double marks;
    public:
        void setNum(){
        int n;
        cout<< "Enter marks for a student1: ";
        cin>> n;
        marks = n;
        }
    // friend function
    friend void addNum(Student , Student1 );
    };

    //class 2
    class Student1{
    private:
        double marks;
    public:
        void setNum(){
        int n;
        cout<< "Enter marks for a student2: ";
        cin>> n;
        marks = n;
        }
    // friend function
    friend void addNum(Student , Student1 );
    };

    // function defination
    void addNum(Student fobj, Student1 f1obj){
         double sumMarks = fobj.marks + f1obj.marks;
         cout << " sum of marks of student1 & student2 is = "<< sumMarks <<endl;
    }
int main(){
    Student s;
    s.setNum();
    Student1 s1;
    s1.setNum();

    addNum(s,s1);

    return 0;
}