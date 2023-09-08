 #include<cmath>
#include<iostream>
using namespace std;
int main()
{
    short int var1=10; //2 bytes
    short int var2=20;  
    char var3=30;       //1 byte
    char var4=40;
    cout<<"Size of var1:"<<sizeof(var1)<<"\n";
    cout<<"Size of var2:"<<sizeof(var2)<<"\n";
    cout<<"Size of var3:"<<sizeof(var3)<<"\n";
    cout<<"Size of var4:"<<sizeof(var4)<<"\n";
    auto result1=var1+var2;
    auto result2=var3+var4;
    cout<<"Size of result1:"<<sizeof(result1)<<"\n";
    cout<<"Size of result2:"<<sizeof(result2)<<"\n";
}