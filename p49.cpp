//PRIINT DIGITS OF INTEGERS VALUE IN REVERSE ORDER USING DO WHILE LOOP

#include<iostream>
using namespace std;
int main()
{
    int n,x,rev=0;
    cout<<"Enter the number : \n";
    cin>>n;
    do
    {
        x=n%10;
        rev=rev*10+x;
        n=n/10;
    } while (n!=0);
     
    cout<<"REVERSE ORDER IS : "<<rev<<endl;
    return 0;
}