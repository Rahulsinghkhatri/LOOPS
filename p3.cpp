//CHECK GIVEN NUMBER IS POSITIVE OR NEGATIVE OR ZERO

#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the number : \n";
    cin>>n;
    if(n>0)
    {
        cout<<"Number is POSITIVE\n";
    }
    else if(n==0)
    {
        cout<<"number is ZERO\n";
    }
    else
    {
        cout<<"Number is NEGATIVE\n";
    }
    return 0;
}