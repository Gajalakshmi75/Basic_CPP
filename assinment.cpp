#include<iostream>
using namespace std;
int main()
{
    auto var1 {7};
    cout << "var1:"<< var1<<"\n";
    var1=5;
    cout << "var1:" << var1 <<"\n";
    cout << "-------------------------"<<"\n";
    double var2=77.55;
    cout << "var2:"<< var2<<"\n";
    var2=66.44;
    cout << "var2:" << var2 <<"\n";
    cout << "-------------------------"<<"\n";
    auto var3 =777u;
    cout << "var3:"<< var3<<"\n";
    var3= -66.44;
    cout << "var3:" << var3 <<"\n";

}