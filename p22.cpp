//TABLE OF ANY NUMBER

#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the number whose table should be displayed on screen : "<<endl;
    cin>>n;
    for(int i=1;i<11;i++)
    {
        cout<<n<<" X "<<i<<"= "<<n*i<<endl;
    }
    return 0;
}