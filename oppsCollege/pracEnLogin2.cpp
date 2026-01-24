#include<iostream>
using namespace std;

class Login{
    private:
    string userName;
    string password;
    public:
    // parameterized function member
        void setPass(string n,string p){
            userName = n;
            password = p;
        }
// non-parameterized function member
        void getPass(){
             string n;
             string p;
           // return (userName == n , password ==p);
            if(n == userName && p == password){
                cout << "Login successful (*_*)/." << endl;
            }else{
                cout << "Invalid credentials!!! " << endl;
            }
        }
};

int main(){
    Login userObj;
    string n, p;
   // string name,password;
    userObj.setPass("admin","admin001");
    cout<< "Enter admin name: ";
    cin>> n;
    cout<< "Enter admin password: ";
    cin>> p;
    userObj.getPass();
    
    // if(userObj.getPass()){
    //      cout << "Login successful (*_*)/." << endl;
    // }else
    //      cout << "Invalid credentials!!! " << endl;           
    return 0;
}