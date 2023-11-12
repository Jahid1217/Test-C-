#include <iostream>

using namespace std;

int main()
{int year;
    cout << "enter the year" << endl;
    cin>>year;
    if(year%4==0)
        {
            cout<<"the year is leap year "<<year<< endl;
        }
    else
       {
           cout<<"the year is not leap year "<<year<<endl;
       }
    return 0;
}
