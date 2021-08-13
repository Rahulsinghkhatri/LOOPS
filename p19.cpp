//SIMPLE CALCULATOR PROGRAM

#include<iostream>
using namespace std;
int main()
{
    int n,a,b;
    cout<<"Enter choice :\n 1.\t MULTIPLICATION\n 2.\t DIVISION\n 3. \t ADDITION\n 4.\t SUBTRACTION\n";
    cin>>n;
    switch (n)
    {
        case 1 : cout<<"Enter the numbers to be multiplied :";
                 cin>>a>>b;
                 cout<<"PRODUCT IS : "<<a*b<<endl;
                 break;
        case 2 : cout<<"Enter the dividend and divisor :\n";  //ANSWER WILL BE WHOLE NUMBER ONLY
                 cin>>a>>b;
                 cout<<"QUOTIENT IS : "<<a/b<<endl;
                 break;  
        case 3 : cout<<"Enter the numbers to be added :\n";
                 cin>>a>>b;
                 cout<<"SUM IS : "<<a+b<<endl;
                 break;
       case 4 : cout<<"Enter the numbers to be subtracted :\n";
                 cin>>a>>b;
                 cout<<"DIFFERENCE IS : "<<a-b<<endl;
                 break;
        default : cout<<"INVALID INPUT\n";
                  break;

    }
    return 0;
}