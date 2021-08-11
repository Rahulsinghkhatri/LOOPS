//CHECK ALPHABET IS UPPER CASE OR LOWER CASE

#include<iostream>
using namespace std;
int main()
{
    char ch;
    cout<<"Enter the alphabet :\n";
    cin>>ch;
    if(ch>=97 && ch<=122)
    {
        cout<<"IT IS LOWERCASE ALPHABET\n";
    }
    else if(ch>=65 && ch<=90)
    {
        cout<<"IT IS UPPERCASE ALPHABET\n";
    }
    else
    {
        cout<<"WRONG INPUT\n";
    }
    return 0;
}