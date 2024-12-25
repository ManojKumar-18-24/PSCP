#include<iostream>
using namespace std;

int main(){
int n;
cout<<"enter size: ";
cin>>n;
int A[n];
for(int i=0;i<n;i++){
    cin>>A[i];
}
for(int i=0;i<n;i++){
    int s=0;
    for(int j=0;j<i;j++){
        if(A[i]==A[j]){
            s+=1;
        }
    }
    if(s==0){
        cout<<A[i]<<",";
    }
}
return 0;
}