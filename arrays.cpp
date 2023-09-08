#include<iostream>
using namespace std;
int main(){
    int arr[10];
    arr[0]=10;
    arr[1]=7;
    // cout<<"arr[0]:"<<arr[0]<<"\n";
    // cout<<"arr[0]:"<<arr[1]<<"\n";
    for(size_t i{0};i<10;i++){
        cout<<"arr[" <<i<< "]:"<<arr[i]<<"\n";
    }
}