//CONVERT UPPERCASE INTO LOWERCASE AND LOWERCASE INTO UPPERCASE

#include<iostream>
using namespace std;
int main()
{
    char ch,nuch,nlch;   //nuch for upercase and nlch for lowercase
    cout<<"Enter the alphabet :\n";
    cin>>ch;
    nuch=ch+32;
    nlch=ch-32;
    if(ch>=97 && ch<=122)
        cout<<nlch<<endl;
    else if(ch>=65 && ch<=90)
        cout<<nuch<<endl;
    else
        cout<<"WRONG INPUT\n";
    return 0;

}