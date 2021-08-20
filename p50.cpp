//CHECK NUMBER IS PALIUNDROME USING DO WHILE LOOP

#include<iostream>
using namespace std;
int main()
{
    int n,x,rev=0;
    cout<<"Enter the number : \n";
    cin>>n;
    int copy=n;
    do
    {
        x=n%10;
        rev=rev*10+x;
        n=n/10;
    } while (n!=0);
    if(rev==copy)
    {
        cout<<"NUMBER IS PALINDROME \n";
    }
    else
    {
        cout<<"NUMBER IS NOT PALINDROME \n";
    }
    return 0;
}