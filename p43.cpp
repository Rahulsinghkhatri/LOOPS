//CHECK NUMBER IS PALINDROME OR NOT USING WHILE LOOP

#include<iostream>
using namespace std;
int main()
{
    int n,x=0,y,copy;
    cout<<"Enter the number : \n";
    cin>>n;
    copy=n;
    while(n!=0)
    {
       y=n%10;
       x=x*10+y;
       n=n/10;
    }
    if(x==copy)
    {
        cout<<"NUMBER IS PALINDROME \n";
    }
    else
    {
        cout<<"NUMBER IS NOT PALINDROME \n";
    }
    return 0;
}