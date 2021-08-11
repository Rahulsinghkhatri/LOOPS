//SHOW RESULT ACCORDING TO PERCENT USING IF ELSE STATEMENT

#include<iostream>
using namespace std;
int main()
{
    float per;
    cout<<"Enter the percentage :\n";
    cin>>per;
    if(per>=70)
      cout<<"PASS WITH FIRST DIVISION\n";
    else if(per>=50)
      cout<<"PASS WITH SECOND DIVISION\n";
    else if(per>=35)
      cout<<"PASS WITH THIRD DIVISION\n";
    else 
      cout<<"FAIL\n";
    return 0;
}