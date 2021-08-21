//CHECK GIVEN NUMBER IS ARMSTRONG NUMBER OR NOT USING DO WHILE LOOP

#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int n,x,sum=0,copy;
    cout<<"Enter the number : "<<endl;
    cin>>n;
    copy=n;
    do
    {
        x=n%10;
        n=n/10;
        sum=sum+pow(x,3);
    }while(n!=0);
    if(sum==copy)
    {
        cout<<"NUMBER IS ARMSTRONG \n";
    }
    else
    {
        cout<<"NUMBER IS NOT ARMSTRONG \n";
    }
    return 0;
}