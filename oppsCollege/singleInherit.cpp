#include<iostream>
using namespace std;
// single inheritence
class Account{
public:
    double accountNo;
    double balance;
    //constructor
     Account(){
        cout<< "i am a base class constructor!!"<< endl;
    }
};
   

// class2
class SavingAccount : public Account{
    // accountNo,balance, "interestRate"
    public:
        double interestRate;

        SavingAccount(){
         cout<< "i am a derived class constructor!!"<< endl;   
        }

};
int main(){
   ///initialization and vlaue assigning
    Account a1;
    a1.accountNo = 444;
    a1.balance = 9999;
    cout<< " Account Number is : "<< a1.accountNo<<endl;
    cout<< " Account balance is : "<< a1.balance<<endl;

    ///initialization and vlaue assigning
    SavingAccount s1;
    s1.accountNo = 333;
    s1.balance = 99;
    cout<< " \nSavingAccount Number is : "<< s1.accountNo<<endl;
    cout<< " SavingAccount balance is : "<< s1.balance<<endl;
    return 0;
}