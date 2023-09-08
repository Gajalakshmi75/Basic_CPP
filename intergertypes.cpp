#include<iostream>
using namespace std;
int main()
{
    int fruits_count;
    int apple_count{};
    int guava_count{10};
    int banana_Count{15};
    int fruits{+guava_count+banana_Count};
    //int new_num{doesny_exist};
    cout<<"Fruits count:"<<fruits_count<<"\n";
    cout<<"Apple count:"<<apple_count<<"\n";
    cout<<"Guava count:"<<guava_count<<"\n";
    cout<<"fruits:"<<fruits;
    //int narrowing_conversion{7.5};
    return 0;
}