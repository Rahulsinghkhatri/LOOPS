//CHECK GIVEN NUMBER IS PRIME OR NOT

#include<iostream>
using namespace std;
int main()
{   
    int n,flag=0;
    cout<<"ENTER THE NUMBER : \n";
    cin>>n;
    for(int i=2;i<=n/2;i++)
    {
        if(n%i==0)
        {
            flag++;
        }
    }
    if(flag==0)
    {
        cout<<"NUMBER IS PRIME\n";
    }
    else
    {
        cout<<"NUMBER IS NOT PRIME\n";
    }
    return 0;
}