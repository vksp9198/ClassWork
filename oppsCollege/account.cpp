#include<iostream>
using namespace std;

class acc{
private: 
    double balance;  // data hiding
    string password;

public:
    double acNo;
    string name;
    string address;

    //for balance 
    //setter
    void setBalance(double b){
        balance = b;
    }
    //getter
    double getBalance(){
        return balance;
    }
  
};

int main(){
// initialisation
    acc a1;
// values assigning
    a1.acNo = 919877;
    a1.name = "Vikas Prajapati";
    a1.address = "kk";
    //a1.balance = 999;
    a1.setBalance(99);
    a1.getBalance();
// printing the values
    cout<< "Account NO. : " << a1.acNo <<endl;
    cout<< "Name : " << a1.name <<endl;
    cout<< "Address : " << a1.address <<endl;
// private balance
    cout<< "balance : " << a1.getBalance() <<endl;
    return 0;
}