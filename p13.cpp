//GREATER VALUE IN 3 NUMBERS USING IF ELSE STATEMENT

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
          cout<<"GREATER VALUE IS : "<<a;
        else
          cout<<"GREATER VALUE IS : "<<c;
    }
    else if(b>c)
        cout<<"GREATER VALUE IS : "<<b;
    else
        cout<<"GREATER VALUE IS : "<<c;
    return 0;
}