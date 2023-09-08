#include<iostream>
using namespace std;
int main(){
    char message[6]{'h','e','l','l','o','\0'};
    // cout<<"Message:";
    // for(auto c:message){
    //     cout<<c;
    // }
    // cout<<endl;
    // message[1]='a';
    // cout<<"Message:";
    // for(auto c:message){
    //     cout<<c;
    // }
    // cout<<endl;
    cout<<"message:"<<message<<endl;

    char message1[6]{'h','e','l','l','o','\0'}; // c string
    cout<<"message:"<<sizeof(message1)<<endl;
    char message2[]{'h','e','l','l','o','\0'};  //not a c string bcz there is not null char 
    cout<<"message:"<<sizeof(message2)<<endl;
    char message3[]{'h','e','l','l','o'};
    cout<<"message:"<<sizeof(message3)<<endl;


}