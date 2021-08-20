//FIND SUM OF DIGITS OF INTEGER VALUE USING WHILE LOOP

#include<iostream>
using namespace std;
int main()
{
    int n,x,sum=0;
    cout<<"Enter the number : \n";
    cin>>n;
    while(n!=0)
    {
        x=n%10;
        n=n/10;
        sum=sum+x;
    }
    cout<<"Sum of digits is : "<<sum<<endl;
    return 0;
}