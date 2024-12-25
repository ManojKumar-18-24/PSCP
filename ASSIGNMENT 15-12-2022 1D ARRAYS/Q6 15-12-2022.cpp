#include<iostream>
using namespace std;

int main(){
int n,k=0;
cin>>n;
int a[n];
for(int i=0;i<n;i++){
    cin>>a[i];
}

for(int i=1;i<n;i++){
    int s1=0,s2=0;
for(int j=0;j<i;j++){
    s1+=a[j];
}
for(int j=i+1;j<n;j++){
    s2+=a[j];
}
if(s1==s2){
    cout<<"index is "<<i<<" element is "<<a[i];
    k++;
}
}
if(k==0){
    cout<<"NO POSSIBILITY";
}
return 0;
}