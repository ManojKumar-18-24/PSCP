#include<iostream>
using namespace std;

int main(){
int h;
cin>>h;
int y=h;
int sum=0;
while(h>0){
    int g=h%10;
    sum=(sum*10)+g;
    h/=10;
}
while(sum>0){
    int l=sum%10;
    switch (l)
    {
    case 1:cout<<"ONE ";break;
    case 2:cout<<"TWO ";break;
    case 3:cout<<"THREE "; break;
    case 4:cout<<"FOUR ";break;
    case 5:cout<<"FIVE ";break;
    case 6:cout<<"SIX ";break;
    case 7:cout<<"SEVEN ";break;
    case 8:cout<<"EIGHT ";break;
    case 9:cout<<"NINE ";break;
    case 0:cout<<"ZERO ";break;
    default:cout<<"0";
        break;
    }
    sum/=10;
}
return 0;
} 