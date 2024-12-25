#include<iostream>
using namespace std;

int main(){
for(int i=1;i<14;i++){
    if(i<=3){
        for(int j=1;j<3-i;j++){
            cout<<" ";
        }
        for(int j=1;j<=3+2*i;j++){
       cout<<"*";
        } 
        if(i==1 || i==2){
            cout<<"  ";
        }
        if(i==3){
            cout<<" ";
        }
        for(int j=1;j<=3+2*i;j++){
       cout<<"*";
        }}
        else{
            
        }
        cout<<endl;
}
return 0;
}
