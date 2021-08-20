//FIND MULTIPLICATION OF DIGITS OF INTEGER VALUE USING DO WHILE LOOP

#include<iostream>
using namespace std;
int main()
{
     int n,x,prod=1;
    cout<<"Enter the number : \n";
    cin>>n;
    do
    {
        x=n%10;
        prod=prod*x;
        n=n/10;
    } while (n!=0);
    cout<<"PRODUCT OF DIGITS IS : "<<prod<<endl;
    return 0;
}