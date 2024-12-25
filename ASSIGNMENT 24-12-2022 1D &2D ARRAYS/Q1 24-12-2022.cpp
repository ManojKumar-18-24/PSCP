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
int s=0, c[m];
for(int i=0;i<m;i++){
    int y=0;
    for(int j=0;j<n;j++){
        if(a[i]==b[j]){
          y++;
        }
    }
    if(y==0){
        c[s]=a[i];
        s++;
    }
}
m=s;
for(int i=0;i<s;i++){
    a[i]=c[i];
}
for(int i=0;i<m;i++){
    cout<<a[i]<<" ";
}cout<<endl;
cout<<m;
return 0;
}