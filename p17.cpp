// INPUT ANY NUMBER AND PRINT MONTH NAME AND NUMBER OF DAYS

#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the number :\n";
    cin>>n;
     switch (n)
    {
        case 1 : cout<<"JANUAARY\n"<<"31 days";
                 break;
        case 2 : cout<<"FEBRUARY\n"<<"28 days";
                 break;
        case 3 : cout<<"MARCH\n"<<"31 days";
                 break;
        case 4 : cout<<"APRIL\n"<<"30 days";
                 break;
        case 5 : cout<<"MAY\n"<<"31 days";
                 break;
        case 6 : cout<<"JUNE\n"<<"30 days";
                 break;
        case 7 : cout<<"JULY\n"<<"31 days";
                 break;
        case 8 : cout<<"AUGUST\n"<<"31 days";
                 break;
        case 9 : cout<<"SEPTEMBER\n"<<"30 days";
                 break;
        case 10 : cout<<"OCTOBER\n"<<"31 days";
                 break;
        case 11 : cout<<"NOVEMBER\n"<<"30 days";
                 break;
        case 12 : cout<<"DECEMBER\n"<<"31 days";
                 break;
        default :cout<<"INVALID INPUT\n";
                 break;
    }
    return 0;
}