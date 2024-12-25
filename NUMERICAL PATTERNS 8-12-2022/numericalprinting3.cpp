#include<iostream>
using namespace std;

int main(){

    int n;
    cout<<"ENTER A NUMBER: ";
    cin>>n;

    for(int i=1;i<=n;i++){
        for(int j=1;j<=(2*n-1);j++){
            if(i+j==(n+1)||j-i==(n-1)||i==n){
                cout<<i;
            }
            else{
                cout<<" ";
            }
        }
        cout<<endl;
    }
    return 0;
}