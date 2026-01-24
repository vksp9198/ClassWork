#include<iostream>
using namespace std;
class Student{
    private:
        int age;
    public:
        void setAge(int n){
            age = n;
        }
    friend void getAge(Student);
};

// defination of friend function 
void getAge(Student s){
    cout << "Age is = " << s.age<<endl;
}

//second class
class _Student{
    private:
        int age;
    public:
        void setAge(int n){
            age = n;
        }
    friend void showAge(_Student);
};

// // defination of  second friend function 
void showAge(_Student _s){
    cout << "Age is = " << _s.age <<endl;
}
int main(){

    Student s1;
    s1.setAge(19);
    getAge(s1);

    // class 2
    _Student _s1;
    _s1.setAge(19);
    showAge(_s1);
    return 0;
}