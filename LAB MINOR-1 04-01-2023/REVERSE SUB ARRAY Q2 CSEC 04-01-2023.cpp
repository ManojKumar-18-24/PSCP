#include<iostream>
using namespace std;

void reverse(int a[],int n,int k,int h,int l=0){
static int p=0,u=h,i=0;
if(i==2){
 for(int i=0;i<n;i++){
    cout<<a[i]<<" ";
 }
}
else if(l>=(k-1)){
p+=h;
u+=h;
if(u<=n){
  reverse(a,n,u,h,p); 
}
else{ i++;
    reverse(a,n,n,h,p);
}
}
else if(l<k-1){   
    int r=a[l];
    a[l]=a[k-1];
    a[k-1]=r;
    reverse(a,n,k-1,h,l+1);
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
    reverse(b,n,k,k);
return 0;
}