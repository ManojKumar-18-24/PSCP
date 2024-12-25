#include<iostream>
using namespace std;

int main(){
int n;
cin>>n;
int sum=0;
int y=0;
  int x=1;
  cout<<y<<" "<<x<<" ";
 for(int i=1;i<=(n-2);i++){
  sum+=(x+y);
  cout<<sum<<"  ";
  y=x;
  x=sum;
  sum-=sum;
 }
return 0;
}