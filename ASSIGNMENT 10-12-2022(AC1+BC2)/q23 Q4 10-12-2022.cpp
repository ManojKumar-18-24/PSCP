#include<iostream>
using namespace std;

int main(){
for(int i=1;i<=10;i++){
   if(i<=5){
    for(int j=1;j<=(6-i);j++){
        cout<<"*";
    }
    for(int j=1;j<=(i-1);j++){
        cout<<" ";
    }
    for(int j=1;j<=(6-i);j++){
        cout<<"*";
    }
   }
   if(i>5){
    for(int j=1;j<=(i-5);j++){
        cout<<"*";
    }
    for(int j=1;j<=(10-i);j++){
        cout<<" ";
    }
    for(int j=1;j<=(i-5);j++){
        cout<<"*";
    }
   }
   cout<<endl;
}
return 0;
}