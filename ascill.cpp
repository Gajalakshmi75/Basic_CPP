#include<iostream>
using namespace std;
int main(){
    char char1{'a'};
    char char2 {'e'};
    char char3{'i'};
    char char4{'o'};
    char char5{'u'};
    cout << char1 << "\n";
    cout << char2 << "\n";
    cout << char3 << "\n";
    cout << char4 << "\n";
    cout << char5 << "\n";
    
    char value=75;
    cout << "value:" << value << "\n";
    cout << "value(int):" << static_cast<int>(value);
}