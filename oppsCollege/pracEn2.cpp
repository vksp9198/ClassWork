#include<iostream>
using namespace std;
//create a class name student and give some marks.

class Student{
    private:
        int marks;
    public:
   // default constructor
   Student(){
    marks = 0;
   }
        void giveMarks(int m){
            if(m>=0 && m<=100){
                marks += m;              
            }else{
                cout<< "Invalid Marks!!!\n";
            }
        
            
        }
        int getMarks(){           
                cout<< "Marks is : "<< marks<< endl;   
                return marks;        
        }
};
int main(){
    Student s1;
    s1.giveMarks(12);
    s1.getMarks();

    return 0;
}