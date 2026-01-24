#include<iostream>
#include<string>
using namespace std;
class teacher{                 // It is the best example of encapsulation.
    // properties/Attribute
  private:
     double salary;
     string subject;
     int id;

  public: 
    string name;
    string department; // function member

    // methods/ member function
    void changeDept(string newDept){
        department = newDept;
    }\
    // setter    // use to set new value.
    void setSalary(double s){
        salary = s;
    }
    // getter 
    double getSalary(){
        return salary;
    }

    // for subject
// this is called setter.
     void setSub(string s){
        subject = s;
     }
// this is called getter. 
string getSub(){
    return subject;
}
//for id 
//this is called setter
void setId(int i){
    id = i;
}
// this is called getter 
int getId(){
    return id;
}
};


int main(){
    teacher t1;  //t1 ---> object
    t1.name = " shradha ";
    t1.department = "computer science";
    // t1.subject = "C++";
   // t1.salary = 50000; // because of private
    t1.setSalary(45000);
    t1.getSalary();
    t1.setSub("oops in c++");
    t1.getSub();
    // t1.id;
    t1.setId(117);
    t1.getId();


    cout<< " name : "<< t1.name << endl;
    cout<< " department : "<< t1.department <<endl;
    cout<< " subject : "<< t1.getSub() <<endl;
    cout<< " salary : "<< t1.getSalary() <<endl;
    cout<< " Teacher id : " << t1.getId() <<endl;
    return 0;
}
 // OOPs in C++
//  these are four pillers of object oriented progamming in c++.
//  1. Encapsualation
//  2. Abstraction
//  3. Inheritence
//  4. Polymorphisim

// 1. Encapsulation: Encapsualation is wrapping up of
//  data and member function in a single unit is called class.
//  (data hiding is also a part of encapsulation).

//2.  Inheritence : when properties and memeber function
// of base class are passed on the derived class that is called inheritence. 
// (parent to child)

// 3. Polymorphisim : polymorphisim is the ability of objects take, on defferent 
// forms or behave in different ways depending on the context in which they are used.
// a. Compile time polymorphisim  => constructor overloading , function overloading
// b. run time polymorphisim      => function overriding (inherit), virtual function

// 4. Abstraction: hiding unneccesory details(sensitive data)
//  and showing the important parts. this will be achived by the accsess modifire
//  or accsess specifire.
