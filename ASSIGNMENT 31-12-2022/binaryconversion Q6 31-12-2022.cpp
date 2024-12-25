#include<iostream>
using namespace std;

int  binary(int n){
 if(n==1){;}
 else
   return ((n%2)+(binary(n/2))*10);
 }

int main(){
int n;
cin>>n;
cout<<binary(n);
return 0;
}