#include<iostream>
using namespace std;

void sortandprint(int a[],int t,int r,int i=0){
if(i==r){
        for(int i=0;i<=r;i++){     
        cout<<a[i]<<" ";}
}
 else if(t==i){
          t=r;
        sortandprint(a,t,r,i+1);
    }
else if(a[t]<a[i]){
int temp=a[t];
 a[t]=a[i];
  a[i]=temp;   
    sortandprint(a,t-1,r,i);
}
else{
      sortandprint(a,t-1,r,i);
}
}


int main(){
int n;
cout<<"size= ";
cin>>n;
int b[n];
for(int i=0;i<n;i++){
    cout<<"b["<<i<<"]";
    cin>>b[i];
}
sortandprint(b,n-1,n-1);
return 0;
}