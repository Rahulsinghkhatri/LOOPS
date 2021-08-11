//CHECK GIVEN CHARACTER IS ALPHABET OR DIGIT OR SPECIAL SYMBOL

#include<iostream>
using namespace std;
int main()
{
    char ch;
    cout<<"Enter the character :\n";
    cin>>ch;
    if((ch>=65 && ch<=90)||(ch>=97 && ch<=122))
         cout<<"CHARACTER IS ALPHABET\n";
    else if(ch>=48 && ch<=57)
         cout<<"CHARACTER IS DIGIT\n";
    else 
         cout<<"CHARACTER IS SPECIAL SYMBOL\n";
    return 0;
}