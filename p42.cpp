//PRINT DIGITS OF INTEGER VALUE IN REVERSE ORDER USING WHILE LOOP

#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the number : \n";
    cin>>n;
    while(n!=0)
    {
        cout<<n%10<<endl;
        n=n/10;
    }
    return 0;
}