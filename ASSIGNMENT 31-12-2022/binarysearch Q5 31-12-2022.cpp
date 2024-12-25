#include<iostream>
using namespace std;

void binary_search(int a[],int h,int key,int l,int sum=0){
 if(l==h && sum==0){
      cout<<"key not found";
 }
 else{
    int mid=(l+h)/2;
    if(mid==0){ cout<<"key not found";}
  else{
  if(key==a[mid] || key==a[l] || key==a[h]){
    sum++;
     cout<<"key found and it is "<<key;
  }
  else if(key>a[mid]){
    binary_search(a,h,key,mid+1,sum);
  }
  else{  
    binary_search(a,mid-1,key,l,sum);
  }
  }
 }
}

int main(){
int size=6;
cout<<"enter the size: ";
cin>>size;

int b[size];
for(int i=0;i<size;i++){
   cout<<"b["<<i<<"] =";
    cin>>b[i];
}
int key=200;
cout<<"enter a key: ";
cin>>key;
binary_search(b,size-1,key,0);
return 0;
}