//PRINT FIRST AND LAST DIGIT OF INTEGER VALUE  USING WHILE LOOP

#include<iostream>
using namespace std;
int main()
{
    int n,rev=0,x;
    cout<<"Enter the number : \n";
    cin>>n;
    cout<<"LAST DIGIT IS : "<<n%10<<endl;
    while(n!=0)
    {
        x=n%10;
        n=n/10;
        rev=rev*10+x;
    }
    cout<<"FIRST DIGIT IS : "<<rev%10<<endl;
    return 0;
}