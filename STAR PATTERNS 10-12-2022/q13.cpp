#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
for(int i=1;i<=n;i++){
    if(i==1){
        for(int j=1;j<=n;j++){
            cout<<"*";
    }
    }
    else{
for(int j=1;j<=(n-i+1);j++){
    if(j==1 || j==(n-i+1)){
        cout<<"*";
    }
    else{
        cout<<" ";
    }
}
    }
    cout<<endl;
    }
return 0;
}