#include<iostream>
using namespace std;
class Book{
    public:
        string title;
        double price;
    Book(){
        cout<< " i am a default or non-parameterised constructor!!\n";
        title = "c++";
        price = 299;
    }
    void getInfo(){
        cout<< "Book title is : "<< title<<endl;
        cout<< "Book price  is : "<< price<<endl;
    }
};
int main(){
    Book b1obj;
    b1obj.title = "c++";
    b1obj.price = 299;
    b1obj.getInfo();
    
    return 0;
} 