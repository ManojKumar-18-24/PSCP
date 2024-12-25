#include<iostream>
using namespace std;

int main(){
    int u;
    cin>>u;
  int j=u;
  int s=0;
    while(u>0){
 int f=u%10;
s+=(f*f*f);
u/=10;
    }
    if(s==j){
        cout<<"armstrong number";
    }
    else{
        cout<<"not an armstrong number";
    }   
     return 0;
}