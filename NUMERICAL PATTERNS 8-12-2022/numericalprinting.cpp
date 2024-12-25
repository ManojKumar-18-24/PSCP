#include<iostream>
using namespace std;

int main(){

    int h;
    cout<<"ENTER A NUMBER: ";
    cin>>h;

    int k;
    
    for(int i=1;i<=h;i++){
        for(int j=1;j<=h;j++){
            if(i+j<=h+1){
                cout<<i+j-1<<" ";
            }
            else{
                cout<<i+j-h-1<<" ";
            }
        }
        cout<<endl;
    }

    return 0;
}