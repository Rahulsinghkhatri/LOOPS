//CALCULATE PROFIT OR LOSS

#include<iostream>
using namespace std;
int main()
{
    int cp,sp,p,l;
    cout<<"\nEnter the cost price :";
    cin>>cp;
    cout<<"\nEnter the selling price :";
    cin>>sp;
    if(cp>sp)
    {
        l=cp-sp;
        cout<<"LOSS OF "<<l<<"RUPEES\n";
    }
    else if(cp<sp)
    {
        p=sp-cp;
        cout<<"PROFIT OF "<<p<<"RUPEES\n";
    }
    else
    {
        cout<<"NO PROFIT NO LOSS\n";
    }
    return 0;
}