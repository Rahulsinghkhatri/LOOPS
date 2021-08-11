//CHECK CHARACTER IS VOWEL OR CONSONENT

#include<iostream>
using namespace std;
int main()
{
    char ch;
    cout<<"Enter the character :\n";
    cin>>ch;
    if(ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U'||ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u')
    {
        cout<<"CHARACTER IS VOWEL\n";
    }
    else if((ch>=97 && ch<=122)||(ch>=65 && ch<=90))
    {
        cout<<"CHARACTER IS CONSONENT\n";
    }
    else
    {
        cout<<"CAHRACTER IS NEITHER VOIWEL NOR CONSONENT\n";
    }
    return 0; 
}