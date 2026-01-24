#include<iostream>
using namespace std;

// again this is the best example of single inheritence with parameters/ attributes.
//class1
class BankCustomer{
 public:
    string name;
    int age;
    double accountNo;
    // constructor
    BankCustomer(string name , int age ,double acNo){
       cout<< "base class"<< endl;
        this -> name = name;
        this -> age = age;
        this -> accountNo = accountNo;
        
    }
};

// class2
class LoanCustomer : public BankCustomer{
    // name, age, accountNo, loanAmount,EMI
public: 
    double loanAmount;
    double EMI;
    //constructor
     LoanCustomer(string name , int age ,double accountNo, double loanAmount,double EMI): BankCustomer(name,age,accountNo){
       this -> loanAmount = loanAmount;
       this -> EMI = EMI;

        cout<< "derived class"<< endl;
        cout<< "Name is :"<< name<< endl;
        cout<< "age is : "<< age<< endl;
        cout<< "Account number is "<< accountNo << endl; 
        cout<< "Loan Ammount is : "<< loanAmount<< endl; 
        cout<< "EMI is : "<< EMI<< endl; 
    }
};
int main(){

    BankCustomer b1("rakesh",19,7824);
      cout<< "Name is :"<< b1.name<< endl;
      cout<< "age is :"<<b1.age<< endl;
      cout<< "accountNo is :"<< b1.accountNo << endl;


    LoanCustomer l1("sagar", 19, 8183, 49999,3478);

    return 0; 
}