//CHECK GIVEN NUMBER IS ARMSTRONG NUMBER OR NOT USING WHILE LOOP

#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int n,x,y,sum=0;
    cout<<"Enter the number : \n";
    cin>>n;
    int copy=n;
    while(n!=0)
    {
       x=n%10;
       n=n/10;
       y=pow(x,3);
       sum=sum+y;
    }
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