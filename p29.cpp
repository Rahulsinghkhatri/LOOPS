//PRINT ALL EVEN NUMBERS BETWEEN 1 AND 20 USING OPERATOR

#include<iostream>
using namespace std;
int main()
{
    for(int i=2;i<=20;i++)
    {
        if(i%2==0)
        {
            cout<<i<<"\n";
        }
    }
    return 0;
}