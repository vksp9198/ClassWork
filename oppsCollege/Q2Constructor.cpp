#include<iostream>
using namespace std;
class Bank{
 public:
    double acNum;
    string holderName;
    double balance;
    Bank(){
        balance = 4999;
    }
    Bank(double an, string hn){
        acNum = an;
        holderName = hn;
    }

    void depositMoney(double amt){   
        balance = balance + amt;
    }
    void withdrawMoney(double amt){
        balance = balance - amt;
    }
    void showBalance(){
        cout << "current balance is : "<< balance << endl;
    }
    void getInfo(){
        cout<< " Holder name is : " << holderName <<endl;
        cout<< " Account number is : " << acNum  <<endl;
       
    }
};
int main(){
    Bank b1;
    Bank b2(9888 , "vikas");
    // b1.holderName = "vikas ";
    // b1.acNum = 819283;
    b1.depositMoney(400); // 4999 + 400 = 5399
    b1.withdrawMoney(2000); //5399 - 2000 = 3399
    b1.showBalance();
    //b1.customerInfo();
    //  cout<< " Holder name is : " << holderName <<endl;
    //  cout<< " Account number is : " << acNum <<endl;
    b2.getInfo();

    return 0;
}