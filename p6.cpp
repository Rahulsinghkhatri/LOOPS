//VOTING PROGRAM

#include<iostream>
using namespace std;
int main()
{
    int age;
    cout<<"Enter the age :"<<endl;
    cin>>age;
    if(age>=18)
    {
        cout<<"ELIGIBLE FOR VOTING\n";
    }
    else
    {
        cout<<"NOT ELIGIBLE FOR VOTING\n";
    }
    return 0;
}