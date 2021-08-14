//PRINT NATURAL NUMBER FROMN TO ONE (REVERSE ORDER)

#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the number from where number must be print in reverse order : "<<endl;
    cin>>n;
    for(int i=n;i>0;i--)
    {
        cout<<i<<"\t";
    }
    return 0;
}