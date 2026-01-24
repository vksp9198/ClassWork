#include<iostream>
using namespace std;

class acc{
private: 
    double balance;  // data hiding
    string password;

public:
    // constructor
    // acc(){
    //     cout << "hi , I am a constructor!!\n";
    // }

    double acNo;
    string name;
    string address;
   
    //  this the example of Non-parameterised constructor
    acc(){
        address = " vashi";
    }

    // parameterized 
    acc (double acNo, string name , string address);
    this->acNo = acNO;
    this->name = name;
    this->address = address;

    // //for balance 
    // //setter
    // void setBalance(double b){
    //     balance = b;
    // }
    // //getter
    // double getBalance(){
    //     return balance;
    // }
  
};

int main(){
// // initialisation
//     acc a1;  // this is the first object (create)  // constructor automatically called.when object created.
// // values assigning
//     a1.acNo = 919877;
//     a1.name = "Vikas Prajapati";
//     a1.address = "kk";
//     //a1.balance = 999;
//     a1.setBalance(99);
//     a1.getBalance();
// // printing the values
//     cout<< "Account NO. : " << a1.acNo <<endl;
//     cout<< "Name : " << a1.name <<endl;
//     cout<< "Address : " << a1.address <<endl;
// // private balance
//     cout<< "balance : " << a1.getBalance() <<endl;


// Second account 
    // acc a2;
    // a2.acNo = 6636;
    // a2.name = "Prajapati";
    //a2.address = "Koperkhairane";
    acc(829182, " preeti ", "nerul");

    //printing the value
    cout<< "Account id : " << acNo <<endl;
    cout<< "Name : " << name <<endl;
    cout<< "Address : " << address <<endl;


    return 0;
}