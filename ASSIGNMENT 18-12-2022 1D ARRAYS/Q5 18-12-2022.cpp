#include<iostream>
using namespace std;

int main(){
cout<<"enter two sorted arrays"<<endl;
int m,n,f,l,q,r;
cin>>m>>n;
int a[m],b[n],min;
for(int i=0;i<m;i++){
cout<<"enter"<<m<<" elements";
cin>>a[i];
}
for(int i=0;i<n;i++){
cout<<"enter"<<n<<" elements";
cin>>b[i];
}
int p;
cout<<"enter a sum: ";
cin>>p;
for(int i=0;i<m;i++){
for(int j=0;j<n;j++){
 f=a[i]+b[j];
l=f-p;
if(l<0){l*=-1;}
if(i==0 && j==0){min=l;
}
if(l<=min){min=l;q=a[i];r=b[j];}
}
}
cout<<"closest pair is ";

for(int i=0;i<m;i++){
for(int j=0;j<n;j++){
if( a[i]+b[j]==q+r){
cout<<"["<<a[i]<<","<<b[j]<<"] ";
}
if(q+r<p && a[i]+b[j]==q+r+2*(p-q-r)){
cout<<"["<<a[i]<<","<<b[j]<<"] ";
}
if(q+r>p && a[i]+b[j]==q+r-2*(q+r-p)){
cout<<"["<<a[i]<<","<<b[j]<<"] ";
}
}}
return 0;
}
