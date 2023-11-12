#include <iostream>

using namespace std;

int main()
{int num[5],i;
cout<<"enter 5 numners"<<endl;
for(i=0;i<5;i++)
{
cin>>num[i];
}
  {

    cout<<"the number "<<endl;}
    for(int i=0;i<5;i++)
{
    if(num[i]%2==0)
    {num[i]=0;
        cout<<num[i]<<endl;
    }
else
    num[i]=1;
cout<<num[i]<<endl;
}
return 0;}
