#include <iostream>

using namespace std;

int main()
{char opt;
    cout <<"type b to park bike,type c to park car, type l to park lorry" << endl;
    cin>> opt;
    switch(opt){
case 'b':
    cout<<"park bike at floor 2 ,block c"<<endl;
    break;
case 'c':
    cout<<"park the car at floor 3"<<endl;
    break;
case 'l':
    cout<<"park the lorry at floor 4"<<endl;
default:
    cout<<"no parking available"<<endl;}
    return 0;
}
