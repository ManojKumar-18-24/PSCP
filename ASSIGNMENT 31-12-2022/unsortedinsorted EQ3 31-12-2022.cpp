#include<iostream>
using namespace std;

int binary_search(int a[],int h,int key,int l,int sum=0){
 if(l==h && sum==0){
      return 0;
 }
 else{
    int mid=(l+h)/2;
    if(mid==0){ return 0;}
  else{
  if(key==a[mid] || key==a[l] || key==a[h]){
    sum++;
  return 1;
  }
  else if(key>a[mid]){
  return  binary_search(a,h,key,mid+1,sum);
  }
  else{  
  return  binary_search(a,mid-1,key,l,sum);
  }
  }
 }
}

int main(){
int m,n;
cout<<"enter the size of a: ";
cin>>m;

int a[m];
for(int i=0;i<m;i++){
   cout<<"a["<<i<<"] =";
    cin>>a[i];
}
cout<<"enter size of b: ";
cin>>n;int b[n];
for(int i=0;i<n;i++){
   cout<<"b["<<i<<"] =";
    cin>>b[i];
} int e=0;
for(int i=0;i<n;i++){
int y=binary_search(a,m-1,b[i],0);cout<<y<<endl;
if(y==0){
    e++;
}
}
if(e==0){cout<<"present";}
else{cout<<"not present";}
return 0;
}