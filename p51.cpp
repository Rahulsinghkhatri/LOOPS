//FIND SUM OF INTEGER VALUE USING DO WHILE LOOP

#include<iostream>
using namespace std;
int main()
{
    int n,x,sum=0;
    cout<<"Enter the number : \n";
    cin>>n;
    do
    {
        x=n%10;
        sum=sum+x;
        n=n/10;
    } while (n!=0);
    cout<<"SUM OF DIGITS IS : "<<sum<<endl;
    return 0;
}