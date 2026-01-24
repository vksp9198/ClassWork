#include<iostream>
using namespace std;
// best example of Encapsulation in this example class name BankAcount and 
//we can depositAmt and withdrawAmt. 
class BankAccount{
    private:
        double balance;
    public:
    BankAccount(){
        balance = 0;
    } 
        void depositAmt(double amt){
           // balance = amt;
           // balance = balance + amt;
            balance += amt;
            cout << "Deposit succsesful.."<<endl;
        }

        void withdrawAmt(double amt){
            // balance = amt;
            if( amt <= balance){
           // balance = balance - amt;
            balance -= amt;
            cout << "Withdrawal succsesful.."<<endl;
            }
            else
            cout<< "Insufficient balance!!"<<endl;
        }

       double getBalance(){
            return balance;
             
        }
};

int main(){

    BankAccount b1;
    b1.depositAmt(8000);
    b1.withdrawAmt(200);
   // b1.getBalance();
    cout << "Current Balance is = "<<b1.getBalance() <<endl;
    return 0;
}