 #include<iostream>
using namespace std;

int main(){
int n,m;
cin>>n;
int a[n];
for(int i=0;i<n;i++){
    cin>>a[i];
    }
 for(int i=0;i<n;i++){ 
    for(int j=i+1;j<n;j++){
        if(a[i]==a[j]){
        m=a[i+1];
        a[i+1]=a[j];
        for(int k=j;k>i+2;k--){
            a[k]=a[k-1];
        }
     a[i+2]=m;
     break;
        }
    }
 } 
 cout<<"rearranged array= ";
 for(int i=0;i<n;i++){
    cout<<a[i]<<" ";
    }

return 0;
} 
