#include<iostream>
using namespace std;

int main(){
int n,m,v,p=0;
cout<<"enter the size: ";
cin>>n;
int a[n];
for(int i=0;i<n;i++){
 cout<<"enter the "<<i<<"th element ";
    cin>>a[i];
    }
 for(int i=0;i<n;i++){
 if(a[i]>0){
    m++;
 }
 else{
    v++;
 }
    }
    if(m>v){
        for(int i=0;i<n;i++){
       if(a[i]<0){
        m=a[p];
        a[p]=a[i];
        a[i]=m;
        p+=2;
       }
        }
    }
    else{
        for(int i=0;i<n;i++){
       if(a[i]>0){
        m=a[p];
        a[p]=a[i];
        a[i]=m;
        p+=2;
       }
        }
    }
    cout<<"CHANGED ARRAY= {";
    for(int i=0;i<n;i++){
        cout<<a[i]<<",";
    }cout<<"}";
return 0;   
}