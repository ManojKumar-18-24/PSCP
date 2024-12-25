#include<iostream>
using namespace std;

int main(){

int y;
cout<<"enter a number: ";
cin>>y;

for(int i=1;i<=y;i++){
    for(int j=1;j<=i;j++){
        cout<<y-i+1;
    }
    cout<<endl;
}
return 0;
}