#include<iostream>
using namespace std;

int main(){
int n,m,min,r,w;
cin>>n>>m;
int a[n],b[m];
for(int i=0;i<n;i++){
    cin>>a[i];
}
for(int i=0;i<m;i++){
    cin>>b[i];
}
for(int i=0;i<n;i++){
    min=a[i];
    w=0;
    int h=0,g=0;
    for(int j=i+1;j<n;j++){
        if(a[i]<min){r=j;w++;h++;min=a[j];}
    }
    for(int k=0;k<m;k++){
        if(b[k]<min){r=k;w++;g++;min=b[k];}
    }
    if(w>0){
        if(g>0){b[r]=a[i];a[i]=min;}
        if(h>0){a[r]=a[i];a[i]=min;}
    }
}
  //sir i missed sorting array b in the exam
for(int i=0;i<m;i++){
    min=b[i];w=0;
    for(int j=i+1;j<m;j++){
        if(b[j]<min){
            r=j;min=b[j];w++;
        }
    }
    if(w>0){b[r]=b[i];b[i]=min;}
}
for(int i=0;i<n;i++){
    cout<<a[i];
} cout<<endl;
for(int i=0;i<m;i++){
    cout<<b[i];
}
return 0;
}