#include<iostream>
using namespace std;

int main(){
int n;
cin>>n;
int a[n];
for(int i=0;i<n;i++){
    cin>>a[i];
}
for(int i=0;i<n-1;i++){
    int max=a[i+1];
    for(int j=i+2;j<n && i<=n-3;j++){
      if(a[j]>max){
        max=a[j];
      }
    }
    a[i]=max;
}
for(int i=0;i<n-1;i++){
    cout<<a[i]<<" ";
}

return 0;
}