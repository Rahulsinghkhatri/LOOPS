//INPUT THREE ANGLE OF TRIANGLE AND CHECK TRIANGLE IS VALID OR NOT

#include<iostream>
using namespace std;
int main()
{
    int x,y,z,sum;
    cout<<"Enter the angles of triangle :\n";
    cin>>x>>y>>z;
    sum=x+y+z;
    if(sum==180)
    {
        cout<<"TRIANGLE IS VALID\n";
    }
    else
    {
        cout<<"TRINGLE IS NOT VALID\n";
    }
    return 0;
}