#include<iostream>
using namespace std;
int main()
{
    const char *message{"hii hello"};
    cout<<"message:"<<message<<endl;
    char message1[] {"hii hello world"};
    message1[0]='b';
    cout<<"message1:"<<message1<<endl;
    cout<<"------------------------------------------"<<endl;
    int num{77};
    int *p_num=&num;
    cout<<"number:"<<num<<endl;
    cout<<"p_num:"<<p_num<<endl;
    cout<<"&number:"<<&num<<endl;
    cout<<"*p_number:"<<*p_num<<endl;
}