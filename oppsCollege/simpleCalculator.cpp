#include<iostream>
using namespace std;


int main(){
    // simple calculator
    double num1,num2;
     int choice;
     
    cout<< "<--- Simple calculator by c++ --->"<< endl;
    cout<< "Enter first number = ";
    cin>> num1;
    cout<< "Enter second number = ";
    cin>> num2;
    
    cout<< "1. Addition(+)"<< endl;
    cout<< "2. Subtraction(-)"<< endl;
    cout<< "3. Multiplication(*)"<< endl;
    cout<< "4. Division(/)"<< endl;
    cout<< "5. Exit "<< endl;
    cout<< "Now , Enter your choice = ";
    cin>> choice;
    // cout<< "Enter number = ";
    // cin>> num2;
     
    switch(choice){
        case 1: cout<< "Addition is = "<< (num1+num2) << endl;
        break;
        case 2: cout<< "subtraction is = "<< (num1-num2) << endl;
        break;
        case 3: cout<< "Multiplication is  = "<< (num1*num2) << endl;
        break;
        case 4: cout<< "Division is = "<< (num1/num2) << endl;
        break;
        case 5: cout<< "program exiting... "<< endl;
        break;
        default :cout<< "Invalid choice, please try again!!"<<endl;
    }
    return 0;
}