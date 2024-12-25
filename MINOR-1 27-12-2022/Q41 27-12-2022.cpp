#include<iostream>
using namespace std;

int main(){
int n,e;
cin>>n;int a[n][n];
for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
        a[i][j]=0;
    }
} if(n%2==0){e=n/2;}
else{e=(n+1)/2;}
  int p=0;
  while(p<e){
    for(int i=0+p;i<n-p;i++){
        a[i][p]=1;
    }
    for(int j=1+p;j<n-p;j++){
        a[n-1-p][j]=1;
    }
    for(int i=n-2-p;i>=0+p;i--){
        a[i][n-1-p]=1;
    }
    for(int j=n-2-p;j>=1+p;j--){
        a[p][j]=1;
    }
    p+=2;
  }
  for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
        cout<<a[i][j]<<" ";
    }cout<<endl;
}
return 0;
}