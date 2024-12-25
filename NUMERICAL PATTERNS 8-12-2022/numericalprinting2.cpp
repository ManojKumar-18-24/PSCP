#include<iostream>
using namespace std;

int main(){
    
    int g;
    cout<<"ENTER A NUMBER: ";
    cin>>g;

    for(int i=1;i<=g;i++){
        for(int j=1;j<=(g-i);j++){
            cout<<"  ";
        }
        for(int j=1;j<=i;j++){
            cout<<j<<" ";
        }
        for(int j=(i-1);j>0;j--){
            cout<<j<<" ";
        }
        cout<<endl;
    }
    return 0;
}