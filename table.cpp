#include<iostream>
#include<iomanip>
#include<iostream>
#include<ios>

using namespace std;
int main()
{
    cout<<"Unformatted table:";
    cout<<"lakshmi" << " "<<"21"<<"\n";
    cout<<"lakshmi" << " "<<"21"<<"\n";
    cout<<"lakshmi" << " "<<"21"<<"\n";
    cout<<"lakshmi" << " "<<"21"<<"\n";
    cout<<"lakshmi" << " "<<"21"<<"\n";
    cout<<"lakshmi" << " "<<"21"<<"\n";
    cout<<"---------------------------------------------------"<<"\n";
    cout<<"Formatted table:"<<"\n";

    cout << setw(10) << "lastname" <<setw(10) << "firstname"<< setw(5) << "age" << "\n";
    cout << setw(10) << "lakshmi" <<setw(10) << "gaja"<< setw(5) << "21" << "\n";
    cout << setw(10) << "lakshmi" <<setw(10) << "gaja"<< setw(5) << "21" << "\n";
    cout << setw(10) << "lakshmi" <<setw(10) << "gaja"<< setw(5) << "21" << "\n";
    int col_width=10;
    cout<<left;
    cout<<setfill('^');
    cout << setw(col_width) << "lakshmi" <<setw(col_width) << "gaja"<< setw(col_width) << "21" << "\n";
    cout << setw(col_width) << "lakshmi" <<setw(col_width) << "gaja"<< setw(col_width) << "21" << "\n";
    cout << setw(col_width) << "lakshmi" <<setw(col_width) << "gaja"<< setw(col_width) << "21" << "\n";
     
cout<<"---------------------------------------------------"<<"\n";
     //dec oct hex
     int pos_int{515151};
     int neg_int{-45631};
     cout<< "pos_int:"<<"\n";
     cout<<showpos;            //showpos
     cout<<"pos_int :"<<pos_int<<"\n";
     cout<<"neg_int :"<<neg_int<<"\n";
cout<<"---------------------------------------------------"<<"\n";
     cout<<"pos_int (dec):"<<dec<<pos_int<<"\n";
     cout<<"pos_int (hex):"<<hex<<pos_int<<"\n";
     cout<<"pos_int (oct):"<<oct<<pos_int<<"\n";
cout<<"---------------------------------------------------"<<"\n";
     cout<<"neg_int (dec):"<<dec<<neg_int<<"\n";
     cout<<"neg_int (hex):"<<hex<<neg_int<<"\n";
     cout<<"neg_int (oct):"<<oct<<neg_int<<"\n";
     cout<<"---------------------------------------------------"<<"\n";
     //showbase
      int pos_inte=515151;
    cout<<"pos_int (dec):"<<dec<<pos_inte<<"\n";
     cout<<"pos_int (hex):"<<hex<<pos_inte<<"\n";
     cout<<"pos_int (oct):"<<oct<<pos_inte<<"\n";
    //  cout<<showbase;
    //  cout<<uppercase;
    cout<<fixed;
     cout<<"pos_int (dec):"<<dec<<pos_inte<<"\n";
     cout<<"pos_int (hex):"<<hex<<pos_inte<<"\n";
     cout<<"pos_int (oct):"<<oct<<pos_inte<<"\n";

cout<<"---------------------------------------------------"<<"\n";
double a=3.1423456789765432456789765432345678;
 cout<<"a:"<<a<<"\n"; //default 6 value
 cout<<setprecision(10);
  cout<<"a:"<<a<<"\n";
  cout<<setprecision(20);
  cout<<"a:"<<a<<"\n";
  cout<<setprecision(30);
  cout<<"a:"<<a<<"\n";
  cout<<"---------------------------------------------------"<<"\n";
  double  b{34.1};
  double c{101.39};
  cout<<showpoint;
  cout<<"b:   "<<b<<"\n";
  cout<<"c:  "<<c<<"\n"; //showing trailing zeros if necssary
  cout<<"---------------------------------------------------"<<"\n";
  cout<<right;
  cout<<setw(10)<<-123.245<<"\n";
  cout<<internal;
  cout<<setw(10)<<-123.456<<"\n";//justify content
  cout<<"----------------------------------------------------"<<"\n";

}