#include<iostream>
using namespace std;

int main(){
int n,min,max;
cin>>n;
int a[n];
for(int i=0;i<n;i++){
    cin>>a[i];
} 
for(int i=0;i<n;i++){
    if(i==0){ min=a[0],max=a[n-1];} // sir i forgot to write 
    if(a[i]<min){min=a[i];}         //if(i==1){..}
    if(a[i]>max){max=a[i];}
} 
max--;
int s=0;
while(max>=min){   //sir i put < instead of >= in hurry
    for(int i=0;i<n;i++){  
        if(max==a[i]){s++;}
    }
    max--;
}
    if(s==(n-1)){cout<<"YES";}
    else{cout<<"NO";}
return 0;
}