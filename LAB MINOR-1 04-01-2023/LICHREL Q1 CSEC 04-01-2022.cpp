#include<iostream>
using namespace std;

int reverse(int a,int sum=0){
if(a==0){
    return sum;
}
else{
    int g=a%10;
    sum=(sum)*10+g;
    reverse(a/10,sum);
}
}

void lichrel(int n,int r=0){
    int j=reverse(n);
    int t=reverse(n+j);
   if(n+j>=5000000){
        if(r==0){
            cout<<" lichral";
        }
        else{
            cout<<"not a lichral";
        };}
    else if(n+j==t){
        r++;
        cout<<n<<"+"<<j<<"="<<n+j<<endl;
         cout<<"not a lichral";
    }
    else{cout<<n<<"+"<<j<<"="<<n+j<<endl;
        lichrel(n+j,r);
    }
    

}

int main(){
int n;
cin>>n;
lichrel(n);
return 0;
}