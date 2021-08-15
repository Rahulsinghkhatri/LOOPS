//PRINT ASCII VALUE OF ALPHABET FROM A TO Z

#include<iostream>
using namespace std;
int main()
{
    for(char ch='A';ch<='z';ch++)
    {
        cout<<ch<<"="<<int(ch)<<endl;
    }
    return 0;
}