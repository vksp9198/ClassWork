#include<iostream>
using namespace std;
class print{
    public:
    void show(int x){
        cout<< " int x is : "<< x <<endl;
    }
    void show(char ch ){
        cout<< " char ch is : "<< ch <<endl;
    }
};

// class 2 
// this is also a best examples of function overloading(polymorphisim)
// ex: example of shapes with different datatype

class Shapes{
    public:t
     void area(floa r){
        cout << " circle is = " << 3.14*r*r <<endl;
        return; // circle
     }
     void area(int l ,int b){
        cout << " rectangle is = " << l*b <<endl;
        return; // rectangle
     }
};


// class 2 
// this is also a best examples of function overloading(polymorphisim)
// ex: example of shapes with different datatype


class Add{
    public:
        int add(int a,int b){
            int s = a+b;
            return s;
        }
        int add(int a,int b, int c){
            int s = a+b+c;
            return s;
        }
};
int main(){
    Add a1;
    cout<< " sum: "<< a1.add(5,9,5)<< endl;
    return 0;
}