//PRINT A TO Z (UPPERCASE AND LOWERCASE BOTH) , WITHOUT USING ASCII VALUE

#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"ENTER YOUR CHOICE \t\n 1. FOR CAPITAL \n 2. FOR SMALL\n";
    cin>>n;
    if(n==1)
    {
      for(char ch='A';ch<='Z';ch++)
      {
         cout<<ch<<"\t";
      }
    }
    else if(n==2)
    {
      for(char ch='a';ch<='z';ch++)
      {
         cout<<ch<<"\t";
      }
    }
    else
    {
        cout<<"INVALID CHOICE\n";
    }
    return 0;
}