#include<iostream>
using namespace std;
// create two class meterCentimeter and class footInch
// ,add the values in centimeter and show result in meter centimeter
class footInch;
class mtrCenti{
    private:
        int meter;
        int centi;
    public:
        mtrCenti(int m , int c){
            meter = m;
            centi = c;
        }

    void showValue(){
        cout<<"meter is: "<<meter<< "m"<<endl;
        cout<<"centimeter is: "<<centi<< "cm"<<endl;
    }
    friend void addValues(mtrCenti mc , footInch fi);
};
class footInch{
    private:
        int foot;
        int inch;
    public:
        footInch(int f , int i){
         foot = f;
         inch = i;
        }

    void showValue(){
        cout<<"foot is: "<<foot<< "m"<<endl;
        cout<<"inch is: "<<inch<< "cm"<<endl;
    }
    friend void addValues(mtrCenti mc , footInch fi);
};
// all calculatin and conversion in friend function.
void addValues(mtrCenti mc , footInch fi){
    int sumMtr_cnt = mc.meter*100 + mc.centi; // meter to centi
    int sumfoot_inch = fi.foot*12 + fi.inch;  // foot into inch
    int inchCnt = sumfoot_inch*2.54;

    // sum of all values
    int sumTotal_mtr= (sumMtr_cnt + inchCnt) / 100; // in meter 
    int sumTotal_cnt= (sumMtr_cnt + inchCnt) % 100; // in centi
    cout<<" now after the all calculation result is: "<<endl;
    cout<<"meter is: "<<sumTotal_mtr<< "m"<<endl;
    cout<<"centimeter is: "<<sumTotal_cnt<< "cm"<<endl;
}
int main(){
    mtrCenti m1(4,5);
    footInch f1(2,3);
    m1.showValue();
    f1.showValue();
   
    addValues(m1,f1);
    return 0;
}