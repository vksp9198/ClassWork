#include<iostream>
using namespace std;
 // abstraction with arrow operator.
// Q1. base class bank , derived sbi and hdfc class and function calcLoan interest.
 
// base class
class Bank{
    public:
      virtual void loanInterest();
};

class SBI : public Bank{
    public:
      virtual void loanInterest(){
        cout<< "Loan Interest of SBI bank = 8.5%"<< endl;
      }
};

class HDFC : public Bank{
    public:
      virtual void loanInterest(){
           cout<< "Loan Interest of HDFC bank = 9.0%"<< endl;
      }
};
int main(){
// base class pointer initialization
Bank *b;
// object creation
SBI  sbiObj;
HDFC hdfcObj;

b = &sbiObj;
b -> loanInterest();

b = &hdfcObj;
b -> loanInterest();

    return 0;
}