#include<iostream>
using namespace std;
int addnum(int first,int second)
{
    int result=first+second;
    return result;
}
int main()
{
    int first_num {7};
    int second_num {5};
    cout<< "First number:" << first_num << "\n";
    cout<< "second number:" << second_num <<"\n"; 

    int sum=first_num+second_num;
    cout<< "sum: " <<sum<<"\n";
    
    sum=addnum(5,4); 
    cout<< "sum: " <<sum<<"\n";

    sum=addnum(6,4); 
    cout<< "sum: " <<sum<<"\n";

    cout<< "sum:"<<addnum(4,7);
    return 0;      

}