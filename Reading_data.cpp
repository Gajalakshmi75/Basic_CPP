#include<iostream>
#include<string>
using namespace std;
int main()
{
    /*cout<<"hello c++"<< "\n";
    int age{21};
    cout<< "Age:"<<age<<"\n";
    cerr<<"Error message:something is wrong"<<"\n";
    clog<<"Log message:something happenend"<<"\n";

    int age1;
    string name;
    cout<<"please type you name and age:"<<"\n";
    //cin>>name;
    //cin>>age1;
    cin >> name >> age1;
    cout <<"hello "<< name <<"you are "<<age1<<" years old"<<"\n";
    return 0;*/

    string full_name;
    int age2;
    cout<<"enter name and age"<<"\n";
    getline(cin,full_name);
    cin>> age2;
    cout<<"Hello"<<full_name<<"You are"<<age2<<"years old!"<<"\n";
    return 0;
}