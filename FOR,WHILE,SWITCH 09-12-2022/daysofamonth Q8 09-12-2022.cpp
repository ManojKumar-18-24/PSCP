#include<iostream>
using namespace std;

int main(){
int month;
cin>>month;

switch (month)
{
case 1:
case 3:
case 5:
case 7:
case 8:
case 10:
case 12: cout<<"31 days";
    break;
    case 4:
    case 6:
    case 9:
    case 11: cout<<"30 days";
    break;
    case 2:cout<<"28/29 days";
    break;

default:cout<<"enter a no. b/w 1 & 12(inclusive)";
    break;
}
return 0;
}

