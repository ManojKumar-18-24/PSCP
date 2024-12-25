#include<iostream>
using namespace std;

int main(){
int n;
cout<<"ENTER NO.OF LINES: ";
cin>>n;
for(int i=1;i<3;i++){
for(int i=1;i<n;i++){
    for(int j=1;j<=(n-i);j++){
        cout<<" ";
    }
    for(int j=1;j<=(2*i-1);j++){
        cout<<"*";
    }
    cout<<endl;
}}
for(int i=1;i<=n;i++){
for(int j=1;j<=(3*n/4) && n%2==0;j++){
    cout<<" ";
}
for(int j=1;j<=((3*n+1)/4) && n%2!=0;j++){
    cout<<" ";
}
for(int j=1;j<=(n/2)-1 && n%2==0;j++){
    cout<<"*";
}
for(int j=1;j<=((n-1)/2)-1 && n%2!=0;j++){
    cout<<"*";
}
cout<<endl;
}
return 0;
}