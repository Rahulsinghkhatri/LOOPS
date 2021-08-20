//FIND MULTIPLICATION OF DIGITS OF INTEGER VALUE USING WHILE LOOP

#include<iostream>
using namespace std;
int main()
{
     int n,x,mul=1;
    cout<<"Enter the number : \n";
    cin>>n;
    while(n!=0)
    {
        x=n%10;
        n=n/10;
        mul=mul*x;
    }
    cout<<"Multiplication of digits is : "<<mul<<endl;
    return 0;
}