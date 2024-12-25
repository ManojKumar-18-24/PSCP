#include<iostream>
using namespace std;

int main(){
int u;
cin>>u;
int y=0;
while(u>0){
    int g=u%10;
    int h=u/10;
    int i=h%10;
   if(g-i>1 || g-i<(-1)){
    y++;
   }
  u/=10;
  if(u<10){
    break;
  }
}
if(y==0){
 cout<<"it is a jumbled number";
}
else{
    cout<<"not a jumbled number";
}
return 0;
}