#include <iostream>
using namespace std;
class Shapes{
    private:
        double area();
    public:
     double area(int r){
        double areaCircle = 2*3.14*r*r;
        return areaCircle;
     }
     double area(int l, int b){
        double areaRectangle = l * b;
        return areaRectangle;
     }
     double area(double h, double b){
        double areaTriangle = 0.5*h*b;
        return areaTriangle;
     }
};

int main(){
    Shapes sObj;
    cout << " area of circle is = "<< sObj.area(4)<<endl;
    cout << " area of Rectangle is = "<< sObj.area(4,6)<<endl;
    cout << " area of Triangle is = "<< sObj.area(4.4,8.2)<<endl;
return 0;
}