#include<iostream>
using namespace std;

int reverse(int a,int sum=0){
if(a==0){
    return sum;
}
else{
    sum=(sum)*10+a%10;
    reverse(a/10,sum);
}
}
int prime(int a,int l=2){
if(l>=(a-1)){
    return 0;
}
else{
    if(a%l==0){
        return 1;
    }
    else{
        prime(a,l+1);
    }
}
}

void execution(int k,int n=2){
    if(n>k){;}
  else  {int y=prime(n);
    int t=reverse(n); 
    int o=prime(t);  
    if(y==0 && o==0){
        cout<<n<<" ";
    }
    execution(k,n+1);
  }
}

int main(){
int n;
cin>>n;
cout<<"2"<<" ";
execution(n);
return 0;
}