#include<iostream>
using namespace std;
class _Student; 
class Student{
    private:
        int age;
    public:
        void setAge(int n){
            age = n;
        }
    friend void getAge(Student s , _Student _s);
};

// defination of friend function 
// void getAge(Student s){
//     cout << "Age is = " << s.age<<endl;
// }

//second class
class _Student{
    private:
        int age;
    public:
        void setAge(int n){
            age = n;
        }
    friend void getAge(Student s,_Student);
};

// // defination of  second friend function 
void getAge(Student s, _Student _s){
    cout << "Age is = " << s.age <<endl;
    cout << "Age is = " << _s.age <<endl;
    if (s.age > _s.age ){
         cout << "Student 1 is elder  = " << s.age <<endl;
    }
    else if (_s.age > s.age){
        cout << "Student 2 is elder  = " << _s.age <<endl;
    }
    else{
        cout << "both are equal !! "<<endl;
    }
}
int main(){

    Student s1;
    s1.setAge(19);

    // class 2
    _Student _s1;
    _s1.setAge(19);
    getAge(s1,_s1);
    return 0;
}