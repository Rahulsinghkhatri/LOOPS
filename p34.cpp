//FACTOR OF ANY NUMBER

#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"ENTER THE NUMBER : "<<endl;
    cin>>n;
    cout<<"FACTORS OF "<<n<<" ARE : ";
    for(int i=1;i<=n;i++)
    {
        if(n%i==0)
        {
            cout<<i<<endl;
        }
    }
    return 0;
}