#include<iostream>
using namespace std;

class Login{
    private:
    string userName;
    string password;
    public:
        void setPass(string n,string p){
            userName = n;
            password = p;
        }

      /* void*/  bool getPass(string n,string p){
            // if(userName == n && password == p){
            //     cout << "Login successful " << endl;
            // }else{
            //     cout << "Invalid credentials!!! " << endl;
            // }
           // another way is-->
        return( userName == n, password ==p);
        }
};

int main(){
    Login userObj;
    string n,p;
    userObj.setPass("admin", "admin001");
   // userObj.getPass("vikas", "admin001");
    cout<< "Enter admin name: ";
    cin>> n;
    cout<< "Enter admin password: ";
    cin>> p;
   if(userObj.getPass(n,p))
      cout << "Login successful " << endl;
      else{
      cout << "Invalid credentials!!! " << endl;
   }
    return 0;
}