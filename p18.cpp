// CHECK ALPHABET IS CONSONENT OR VOWEL USING ASCII VALUES

#include<iostream>
using namespace std;
int main()
{
    char ch;
    cout<<"Enter the alphabet :\n";
    cin>>ch;
    switch (ch)
    {
        case 97 :cout<<"VOWEL\n";
                break;
        case 101 :cout<<"VOWEL\n";
                break;
        case 105 :cout<<"VOWEL\n";
                break;
        case 111 :cout<<"VOWEL\n";
                break;
        case 117 :cout<<"VOWEL\n";
                break;
        case 65 :cout<<"VOWEL\n";
                break;
        case 69 :cout<<"VOWEL\n";
                break;
        case 73 :cout<<"VOWEL\n";
                break;
        case 79 :cout<<"VOWEL\n";
                break;
        case 85 :cout<<"VOWEL\n";
                break;
        default :cout<<"CONSONENT\n";
                 break;
    }
    return 0;
}