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

int C[m+n],s=0,min;
for(int i=0;i<m;i++){
   C[i]=A[i];
}
for(int i=0;i<n;i++){
    C[m+i]=B[i];
}
for(int i=0;i<m+n;i++){
    min=C[i];
    for(int j=i+1;j<m+n;j++){
    if(C[j]<min){min=C[j];
        int p=C[i];C[i]=C[j];C[j]=p;
    }
    }
}
cout<<"array C=";
for(int i=0;i<m+n;i++){
    cout<<C[i]<<",";
}

return 0;
}