#include<iostream>
using namespace std;

int main(){
int n,s,k;
cin>>n;
int a[n];
for(int i=0;i<n;i++){
    cin>>a[i];
}
for(int i=0;i<n;i++){
    int f=0;
    for(int j=0;j<n;j++){
        if(a[i]==a[j] && i!=j ){
       f++;
        }
    }
    if(i==1){ s=f;}
    if(f>=s){s=f,k=a[i];}
    
}
cout<<k<<" is reapeted "<<s+1<<" times"<<endl;
return 0;
}