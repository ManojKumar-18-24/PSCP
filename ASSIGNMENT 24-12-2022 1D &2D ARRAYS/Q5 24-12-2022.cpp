#include<iostream>
using namespace std;

int main(){
int n;
cin>>n;
int a[n][n];
for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
        cin>>a[i][j];
    }
}
cout<<"ORIGINAL MATRIX: ";
for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
        cout<<a[i][j];
    }cout<<endl;
}
  int p=0;
while(p<=(n/2)-1){
    for(int i=0+p;i<n-p;i++){
        cout<<a[i][p]<<" ";
    }
    for(int j=1+p;j<n-p;j++){
        cout<<a[n-1-p][j]<<" ";
    }
    for(int i=n-2-p;i>=0+p;i--){
        cout<<a[i][n-1-p]<<" ";
    }
    for(int j=n-2-p;j>=1+p;j--){
        cout<<a[p][j]<<" ";
    }
    p++;
} 
if(n%2!=0){
    cout<<a[(n-1)/2][(n-1)/2];
}  
return 0;
}