#include<iostream>
using namespace std;

int prime(int a,int l=2){
if(l==a){return 0;}
else if(a%l==0){
    return 1;
}
else{
   return prime(a,l+1);
}
}

void printprime(int n,int r=2,int w=0){
     int y=prime(r);
if(w==n){cout<<endl;}  
  else if(y==0){
        cout<<r<<" ";
        printprime(n,r+1,w+1);
    }
    else{
        printprime(n,r+1,w);
    }
}

int main(){
int n;
cin>>n;
if(prime(n)==0){
printprime(n);}
else{
    cout<<"not a prime";
}
return 0;
}