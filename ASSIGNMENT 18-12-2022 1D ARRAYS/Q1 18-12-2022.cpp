#include<iostream>
using namespace std;

int main(){
int n,max,t,q;
cin>>n;
int a[n];
for(int i=0;i<n;i++){
    cin>>a[i];
}
for(int i=0;i<n;i++){
   int sum=0;
    for(int j=i;j<n;j++){
       sum+=a[j];
  if(i==0){max=sum;}
  if(sum>=max){
    max=sum;
  t=j,q=i;
  }
    }
} cout<<"contiguos sub array with largest sum: {";
for(int l=q;l<=t;l++ ){
   cout<<a[l];
   if(l==t){break;}
   cout<<",";
  }cout<<"}";
  
return 0;
}