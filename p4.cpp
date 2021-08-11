//SHOW RESULT ACCORDING TO PERCENT USING IF STATEMENT

#include<iostream>
using namespace std;
int main()
{
     int per;
     cout<<"Enter the percentage : \n";
     cin>>per;
     if(per>=90)
     {
         cout<<"PASSED WITH FIRST DIVISION\n";
     }
     else if(per>=80 && per<90)
     {
         cout<<"PASSED WITH SECOND DIVISION\n";
     }
     else if(per>=65 && per<80)
     {
          cout<<"PASSED WITH THIRD DIVISION\n";
     }
     else if(per>=40 && per<65)
     {
          cout<<"PASSED\n";
     }
     else
     {
        cout<<"FAIL\n";
     }
     return 0;
}