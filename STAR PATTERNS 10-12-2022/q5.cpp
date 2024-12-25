#include<iostream>
using namespace std;

int main(){
int u;
cin>>u;
for(int i=1;i<=u;i++){
    for(int j=1;j<=u-i;j++){
        cout<<" ";
    }
    for(int j=1;j<=u;j++){
        if(i==1||j==1||i==u||j==u){
            cout<<"*";
        }
        else{
            cout<<" ";
        }
    }
    cout<<endl;
}
return 0;
}