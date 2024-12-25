#include<iostream>
using namespace std;

int main()
{
int h,m,k;
cin>>h>>m;
h*=30;h+=m/2,m*=6;
k=h-m;
if(k<0){k*=-1;}
if(k>180){cout<<360-k;}
else{cout<<k;}
return 0;
}