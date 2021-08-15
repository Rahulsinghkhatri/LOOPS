//PRINT A TO Z (UPPERCASE AND LOWERCASE BOTH) , BY USING ASCII VALUES

#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"ENTER YOUR CHOICE \t\n 1. FOR CAPITAL \n 2. FOR SMALL\n";
    cin>>n;
    if(n==2)
    {
      for(int i=97;i<=122;i++)
      {
         cout<<char(i)<<"\t";
      }
    }
    else if(n==1)
    {
      for(int i=65;i<=90;i++)
      {
         cout<<char(i)<<"\t";
      }
    }
    else 
    {
        cout<<"INVALID CHOICE\n";
    }
    return 0;
}



