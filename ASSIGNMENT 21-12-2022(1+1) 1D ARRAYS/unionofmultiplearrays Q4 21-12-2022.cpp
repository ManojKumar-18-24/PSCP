#include<iostream>
using namespace std;

int main(){
int n;
cout<<"enter the size: ";
cin>>n;
int a[n];
for(int i=0;i<n;i++){
 cout<<"enter the "<<i<<"th element ";
    cin>>a[i];
    }
    int m ;
cout<<"enter the size: ";
cin>>m;
int b[m];
for(int i=0;i<m;i++){
 cout<<"enter the "<<i<<"th element ";
    cin>>b[i];
    }
int o;
cout<<"enter the size: ";
cin>>o;
int c[o];
for(int i=0;i<o;i++){
 cout<<"enter the "<<i<<"th element ";
    cin>>c[i];
    }
int p;
cout<<"enter the size: ";
cin>>p;
int d[p];
for(int i=0;i<p;i++){
 cout<<"enter the "<<i<<"th element ";
    cin>>d[i];
    } 
    int e[m+n+o+p];
    for(int i=0;i<n;i++){
      e[i] =a[i];
    }
for(int i=0;i<m;i++){
      e[n+i] =b[i];
    }
for(int i=0;i<o;i++){
      e[n+m+i] =c[i];
    }
for(int i=0;i<p;i++){
      e[n+m+o+i] =d[i];
    }
int q[m],s=0;
for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
        for(int k=0;k<o;k++){
            for(int l=0;l<p;l++){
                if(a[i]==b[j] && b[j]==c[k] && c[k]==d[l]){
                    q[s]=a[i];
                    s++;
                }
            }
        }
    }
}
for(int i=0;i<n+m+o+p;i++){
    int f=0;
    for(int j=0;j<i;j++){
        if(e[i]==e[j]){
            f++;
        }
    }
    for(int j=0;j<s;j++){
        if(e[i]==q[j]){
            f++;
        }
    }
    if(f==0){
        cout<<e[i]<<" ";
    }
}cout<<endl;/*
for(int j=0;j<s;j++){
       cout<<q[j]<<",";
    }cout<<endl;
    for(int j=0;j<m+n+o+p;j++){
       cout<<e[j]<<",";
    }*/
return 0;
}