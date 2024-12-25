#include<iostream>
using namespace std;

int max(int a[],int size,int i){
   if(i<=(size-2)){int max=a[i+1];
    for(int j=i+1;j<size;j++){
        if(a[j]>max){max=a[j];}
    }
    return max;}
    else{
        return 0;
    }
}
int min(int a[],int size,int i){
   if(i>0) {int min=a[i-1];
    for(int j=0;j,i;j++){
        if(a[j]<min){min=a[j];}
    }
    return min;}
    else{
        return 0;
    }
}
int main(){
int n;
cout<<"enter size: ";
cin>>n;
int b[n];
int c[n];
for(int i=0;i<n;i++){
    cout<<"b["<<i<<"] =";
    cin>>b[i];
}
for(int i=0;i<n;i++){
    c[i]=min(b,n,i)+max(b,n,i);
}
for(int i=0;i<n;i++){
  cout<<c[i]<<" ";
}
return 0;
}