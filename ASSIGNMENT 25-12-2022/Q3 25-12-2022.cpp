#include<iostream>
using namespace std;

int main(){
int m,n;
cin>>m>>n;
int a[m][n];
for(int i=0;i<m;i++){
    for(int j=0;j<n;j++){
        cin>>a[i][j];
    }
} 
cout<<"ORIGINAL MATRIX:\n";
for(int i=0;i<m;i++){
    for(int j=0;j<n;j++){
        cout<<a[i][j]<<" ";
    }cout<<endl;
}
cout<<"AFTER ROTATION:\n";
for(int j=0;j<n;j++){
    for(int i=0;i<m;i++){
        cout<<a[i][n-1-j]<<" ";
    }cout<<endl;
}

return 0;
}