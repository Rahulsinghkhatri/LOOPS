//PRINT ALL ODD NUMBERS BETWEEN 1 ND 20 BY USING OPERATOR

#include<iostream>
using namespace std;
int main()
{
    for(int i=1;i<=20;i++)
    {
        if(i%2!=0)
        {
            cout<<i<<"\n";
        }
    }
    return 0;
}