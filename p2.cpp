//GREATEST OF THREE NUMBERS

#include<iostream>
using namespace std;
int main()
{
    int a,b,c;
    cout<<"Enter the three numbers :\n";
    cin>>a>>b>>c;
    if(a>b)
    {
        if(a>c)
        {
        cout<<"Greatest number is : "<<a<<endl;
        }
        else
        {
            cout<<"Greatest number is : "<<c<<endl;
        }
    }
    else if(b>c)
    {
         cout<<"Greatest number is : "<<b<<endl;
    }
    else
    {
        cout<<"Greatest number is : "<<c<<endl;
    }
    return 0;
}