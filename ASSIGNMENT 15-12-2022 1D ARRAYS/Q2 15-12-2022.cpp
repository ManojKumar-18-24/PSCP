#include<iostream>
using namespace std;

int main(){
    int m,n;
    cin>>m>>n;
int A[m],B[n];
for(int i=0;i<m;i++){
    cin>>A[i];
}
for(int i=0;i<n;i++){
    cin>>B[i];
}
cout<<"array A=";
for(int i=0;i<m;i++){
    cout<<A[i]<<",";
}cout<<endl;
cout<<"array B=";
for(int i=0;i<n;i++){
    cout<<B[i]<<",";
}cout<<endl;

int s;
int C[m+n];
s=0;
for(int i=0;i<m;i++){
   int  f=0;
for(int j=0;j<i;j++){
if(A[i]==A[j]){f++;}
}
if(f==0){C[s]=A[i];
s++;}
}
for(int i=0;i<n;i++){
    int p=0;
    for(int l=0;l<m;l++){
        if(B[i]==A[l]){
          p++;
        }
    }
    for(int g=0;g<i;g++){
        if(B[i]==B[g]){
            p++;
        }
    }
    if(p==0){
        C[s]=B[i];  
        s++;
    }
}
cout<<"array C=";
for(int i=0;i<s;i++){
   cout<<C[i]<<",";
}
return 0;
}