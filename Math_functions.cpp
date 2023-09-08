#include<cmath>
#include<iostream>
using namespace std;
int main()
{
    double weight{7.5};
    //floor
    cout<<"weight rounded to floor is:"<<floor(weight)<<"\n";
    cout<<"-------------------------------------------------------------"<<"\n";
    //ceil
    cout<<"weight rounded to floor is:"<<ceil(weight)<<"\n";
    cout<<"-------------------------------------------------------------"<<"\n";
    // abs
    double s{-7000};
    cout<<"abs of weight is:"<<abs(weight)<<"\n";
    cout<<"abs of s  is:"<<abs(s)<<"\n";
    cout<<"-------------------------------------------------------------"<<"\n";
    //exponential
    double ex=exp(10);
    cout<<"The exponential of 10 is:"<<ex<<"\n";
    cout<<"-------------------------------------------------------------"<<"\n";
    //pow
    cout<<" 7 ^ 5 is:"<<pow(7,5)<<"\n";
    cout<<"-------------------------------------------------------------"<<"\n";
    //log
    cout<<"the log value is:"<<log(75.56)<<"\n";
    cout<<"the log value is:"<<log10(1000)<<"\n";
    cout<<"-------------------------------------------------------------"<<"\n";
    //sqrt
    cout<<"The square root of 75 is:"<<sqrt(75)<<"\n";
    cout<<"-------------------------------------------------------------"<<"\n";
    //round
    cout<<"7.654 rounded to:"<<round(7.654)<<"\n";
    cout<<"-------------------------------------------------------------"<<"\n";
}
