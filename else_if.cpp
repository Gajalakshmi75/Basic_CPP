#include<iostream>
using namespace std; 
const int pen{10};
const int marker{20};
const int eraser{30};
int main(){
    int tool{eraser};
    if(tool==pen){
        cout<<"active tool is pen"<<"\n";
    }
    else if(tool==marker){
        cout<<"active tool is marker"<<"\n";
    }
    else if(tool==eraser){
        cout<<"active tool is eraser"<<"\n";
    }
    return 0;  
}
