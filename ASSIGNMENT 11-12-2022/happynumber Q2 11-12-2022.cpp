#include<iostream>
using namespace std;

int main(){
 int u; 
 cin>>u;
int sum=0;
while(true){
    while(u>0){
 int j=u%10;
 sum+=j*j;
 u/=10;}
 if(sum<10){
    break;
 }
 if(sum>=10){
    u=sum;
 }
 sum-=sum;   
}
if(sum==1){
    cout<<"happy number";
}
else{
    cout<<"unhappy number";
}
return 0;
}