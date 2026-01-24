#include<iostream>
using namespace std;

int main(){
   cout <<"/------------------ WELLCOME TO RAILWAY RESERVATION SYSTEM ------------------/" <<endl; 
   cout<< "Available train:"<< endl;
   cout <<"----------------------------------------------------------"<<endl;
   // train Data
    string trainName = "Shatabdi Express";
    double trainNumber = 12010;
    string trainSource = "Mumbai"; 
    string trainDestination = "Pune"; 
    double trainDistance = 152; // in km
    string trainType = "superFast";
    double totalSeats = 120;
    double farePERkm = 3;

// train info
cout << " Train name is : " << trainName <<endl;
cout << "\t number : " << trainNumber <<endl;
cout << "\t source : " << trainSource <<endl;
cout << "\t destination : " << trainDestination <<endl;
cout << "\t Distance : " << trainDistance <<endl;
cout << "\t Seats left : " << totalSeats <<endl;
cout << "\t fare per km : " << farePERkm <<endl;

// passenger info
string name, gender;
int age , seats, PhoneNumber;
cout<< "Now, Enter passenger details ===>"<<endl;
cout<< "Enter your full name : ";
cin>>name;
cout<< "Enter your gender : ";
cin>>gender;
cout<< "Enter your age :";
cin>>age;
cout<< "Enter your phone number : ";
cin>>PhoneNumber;
cout<< "Enter the number of seats : ";
cin>>seats;
    return 0;
}