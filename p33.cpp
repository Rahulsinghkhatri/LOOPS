//FACTORIAL OF ANY NUMBER

#include<iostream>
using namespace std;
int main()
{ 
    int n,fact=1;
    cout<<"ENTER THE NUMBER : \n";
    cin>>n;
    for(int i=n;i>=1;i--)
    {
        fact=fact*i;
    }
    cout<<"FACTORIAL OF "<<n<<" IS "<<fact<<endl;
    return 0;
}