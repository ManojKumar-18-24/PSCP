#include<iostream>
using namespace std;

int main(){
  int n;
cout<<"enter the size: ";
cin>>n;
int a[n];
for(int i=0;i<n;i++){
 cout<<"enter the "<<i<<"th element: ";
    cin>>a[i];
    } 
    int l=0,h=n-1,r=0,p=0;
while(l<h){
  if(a[l]==a[h]){
    l++;
    h--;
    continue;
  }
  else if(a[l]<a[h]){
    if(a[l]+a[l+1]==a[h]){
      p++;
      a[l+1]+=a[l];
      l+=2;
      h--;
      a[l]=0;
    }
    else{
      cout<<"it is not a palindrome"<<endl;r++;
      break;
    }
  }
  else{
    if(a[h]+a[h-1]==a[l]){
      p++;
      a[h-1]+=a[h];
      l++;
      h-=2;
      a[h]=0;
    }
    else{  cout<<"it is not a palindrome"<<endl;r++;
    break;}
  }
}
if(r==0){
  cout<<"IT IS A PALINDROME ARRAY\n";
  cout<<"no.of merges: "<<p<<endl;
}/*
cout<<"[";
for(int i=0;i<n;i++){
 if(a[i]!=0){
  cout<<a[i]<<",";
 }
    } cout<<"]";
return 0;*/
return 0;
}