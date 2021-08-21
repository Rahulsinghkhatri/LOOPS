//PRINT FIRST AND LAST DIGIT OF INTEGER VALUE USING DO WHILE LOOP

#include<iostream>
using namespace std;
int main()
{
    int n,rev=0,x;
    cout<<"Enter the number : \n";
    cin>>n;
    cout<<"LAST DIGIT IS : "<<n%10<<endl;
    do
    {
        x=n%10;
        n=n/10;
        rev=rev*10+x;
    }while(n!=0);
    cout<<"FIRST DIGIT IS : "<<rev%10<<endl;
    return 0;
}