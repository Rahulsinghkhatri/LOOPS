//PRINT NATURAL NUMBER FROM ONE TO N

#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the value upto which numbers must be displayed : ";
    cin>>n;
    for(int i=1;i<=n;i++)
    {
          cout<<i<<"\t";
    }
    return 0;
}