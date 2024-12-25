#include<iostream>
using namespace std;

int main(){
int n,u,r;
cout<<"enter the size: ";
cin>>n;
int a[n];
for(int i=0;i<n;i++){
 cout<<"enter the "<<i<<"th element ";
    cin>>a[i];
    }
for(int i=0;i<n-1;i++){
     u=i;
    int y=0;
    for(int j=i+1;j<n;j++){
        if(a[j]<a[i]){
            y++;
        break;
        }
    }
    if(y==1){break;}
}
for(int k=n-1;k>0;k--){
    r=k;
    int y=0;
    for(int j=k-1;j>=0;j--){
        if(a[j]>a[k]){
            y++;
        break;
        }
    }
    if(y==1){break;}
}
cout<<"smallest sorted is from index "<<u<<" to index "<<r;
return 0;
}