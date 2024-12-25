#include<iostream>
using namespace std;

int main(){
int m,n;
cout<<"ENTER SIZE OF A: ";
cin>>m;
cout<<"ENTER SIZE OF B: ";
cin>>n;
int a[m],b[n];
for(int i=0;i<m;i++){
    cin>>a[i];
}
for(int i=0;i<n;i++){
    cin>>b[i];
}
int s=0,c[m+n];
for(int i=0;i<m;i++){
    int m=0;
    for(int j=0;j<n;j++){
        if(a[i]==b[j]){
        m++;
        }
    }
    if(m==0){
        c[s]=a[i];
        s++;
    }
}
for(int i=0;i<n;i++){
    int k=0;
    for(int j=0;j<m;j++){
        if(b[i]==a[j]){
        k++;
        }
    }
    if(k==0){
        c[s]=b[i];
        s++;
    }
}
for(int i=0;i<s;i++){
    cout<<c[i]<<" ";
}
return 0;
}