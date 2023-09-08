#include<iostream>
using namespace std;
int main()
{
    auto var1 =7;
    auto var2 {7.5};
    auto var3 {7.55f};
    auto var4 { 14.0l};
    auto var5 { 'g'};
    auto var6 {123u};
    auto var7 {123ul};
    auto var8 {123ll};
    cout << "var1 occupies:" << sizeof(var1) << "bytes" <<"\n";
    cout << "var2 occupies:" << sizeof(var2) << "bytes" <<"\n";
    cout << "var3 occupies:" << sizeof(var3) << "bytes" <<"\n";
    cout << "var4 occupies:" << sizeof(var4) << "bytes" <<"\n";
    cout << "var5 occupies:" << sizeof(var5) << "bytes" <<"\n";
    cout << "var5 occupies:" << sizeof(var6) << "bytes" <<"\n";
    cout << "var5 occupies:" << sizeof(var7) << "bytes" <<"\n";
    cout << "var5 occupies:" << sizeof(var8) << "bytes" <<"\n";
}