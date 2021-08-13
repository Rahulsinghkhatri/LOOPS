//INPUT ANY NUMBER AND PRINT DAY OF WEEK

#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the number : \n";
    cin>>n;
    switch (n)
    {
        case 1 : cout<<"SUNDAY\n";
                 break;
        case 2 : cout<<"MONDAY\n";
                 break;
        case 3 : cout<<"TUESDAY\n";
                 break;
        case 4 : cout<<"WEDNESDAY\n";
                 break;
        case 5 : cout<<"THURSDAY\n";
                 break;
        case 6 : cout<<"FRIDAY\n";
                 break;
        case 7 : cout<<"SATURDAY\n";
                 break;
        default :cout<<"INVALID INPUT\n";
                 break;
    }
    return 0;
}