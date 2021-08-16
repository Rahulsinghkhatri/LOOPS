//POWER OF ANY NUMBER

#include<iostream>
using namespace std;
int main()
{ 
    int b,p,power=1;
    cout<<"ENTER THE BASE : \n";
    cin>>b;
    cout<<"ENTER THE POWER : \n";
    cin>>p;
    for(int i=1;i<=p;i++)
    {
         power=power*b;
    }
    cout<<"POWER OF THE "<<b<<" UPTO POWER "<<p<<" IS : "<<power<<endl;
    return 0;
}