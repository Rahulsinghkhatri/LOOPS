//PRINT SUM OF NATURAL NUMBERS FROM 1 TO N

#include<iostream>
using namespace std;
int main()
{
    int n,sum=0;
    cout<<"Enter the number upto which sum must be displayed : "<<endl;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        sum=sum+i;
    }
    cout<<"SUM OF "<<n<<"NUMBERS IS : "<<sum<<endl;
    return 0;
}