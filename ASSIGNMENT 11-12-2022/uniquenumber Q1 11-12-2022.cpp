#include<iostream>
using namespace std;

int main(){
int u;
cin>>u;
int y=0;
if(u<10){
    cout<<"unique number";
}
else{
while(u>0){
  int h=u%10;
  int g=u/10;
  while(g>0){
    int q=g%10;
    if(h==q){
      y++;
    }
    g/=10;
  }
  u/=10;
}
if(y==0){
 cout<<"it is a unique number";
}
else{
    cout<<"it is not a unique number";
}
}
return 0;
}