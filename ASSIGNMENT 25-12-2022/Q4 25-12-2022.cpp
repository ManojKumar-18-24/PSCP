#include<iostream>
using namespace std;

int main(){
int m,n,e;
cin>>m>>n;
int a[m][n];
for(int i=0;i<m;i++){
    for(int j=0;j<n;j++){
        cin>>a[i][j];
    }
} 
for(int i=0;i<m;i++){
    for(int j=0;j<n;j++){
        cout<<a[i][j]<<" ";
    }cout<<endl;
}
if(m<n){e=m;}
else{e=n;}
 int p=0;
while(p<e){
    for(int i=0;i<m-p;i++){
        cout<<a[i][p]<<" ";
    }
    for(int j=1+p;j<n;j++){
        cout<<a[m-1-p][j]<<" ";
    }
    p++;
}
return 0;
}