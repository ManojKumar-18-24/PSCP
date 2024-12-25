#include<iostream>
using namespace std;

int main(){
int n,s=0;
cin>>n;
int product=1;
for(int i=2;i<n;i++){
    int r=i;
    int f=0;
    for(int j=2;j<r;j++){
      if(r%j==0){f++;}
    }
    if(f==0){
        product*=r;
    }
    if(n==product-1 || n==product+1){
        s++;
           cout<<"IT IS PRIMORIAL";
           break;
    }
}
if(s==0){ cout<<"IT IS NOT PRIMORIAL";
}
return 0;
}