#include<iostream>
using namespace std;

int main(){
int n;
cout<<"enter a  number: ";
cin>>n;
int u=0;
for(int i=2;i<n;i++){
   if(n%i==0){ 
    u++;}
}
int rn=0;
while(n>0){
int g=n%10;
rn=(rn*10)+g;
n/=10;
}
int y=0;
for(int i=2;i<rn;i++){
if(rn%i==0){
    y++;
}
}
if(y==0 && u==0){
    cout<<rn<<endl;
    cout<<"it is an emirp number ";
}
else{
    cout<<"not an emirp number";
}
return 0;
}