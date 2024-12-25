#include<iostream>
using namespace std;

void maxsubarray(int a[],int n,int k,int l=0){

static int u=0,p=0,max;
if(l==(n-1)){
  cout<<max<<" ";
}
else if(l==(u+k-1)){
  cout<<max<<" ";
  p=0;
  u+=1;
  maxsubarray(a,n,k,u);
}
else if(p==0){max=a[l];
  p++;
  if(a[l+1]>max){
    max=a[l+1];
  }
  maxsubarray(a,n,k,l+1);}
else{
  p++;
  if(a[l+1]>max){
    max=a[l+1];
  }
  maxsubarray(a,n,k,l+1);
}

}

int main(){
int n;
cout<<"size";
cin>>n;
int b[n];
  for(int j=0;j<n;j++){
        cout<<"b["<<j<<"] =";
        cin>>b[j];
    }
    int k;
    cout<<"key?";
    cin>>k;
    maxsubarray(b,n,k);
return 0;
}