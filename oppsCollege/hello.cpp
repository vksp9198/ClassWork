#include<iostream>
using namespace std;

class student{
public:
    double id;
    string name;
    double cgpa;

    void getInfo(){
        cout << "name : " << name << endl; 
        cout << "cgpa : " << cgpa << endl; 
    }
};
int main(){
    cout<<"hello world!!\n";
    student s1;
    s1.id = 117;
     s1.name = "viaks Prajapati";
     s1.cgpa = 8.9;
    //  cout << "id = "<< s1.id << endl;
    //  cout << "name = "<< s1.name << endl;
    //  cout << "cgpa = "<< s1.cgpa << endl;
   getInfo();
    return 0;
}