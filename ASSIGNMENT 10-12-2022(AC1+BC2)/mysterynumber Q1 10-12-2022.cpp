#include<iostream>
using namespace std;

int main(){
int n;
cin>>n;
int f=0;
for(int i =1;i<=n;i++){
    int r=i;
    int sum=0;
    while(i>0){
   int y=i%10;
   sum=(sum*10)+y;
   i/=10;
    }
    
    if(sum+r==n){
        cout<<r<<" "<<sum<<endl;
        f++;
        
    }
    sum-=sum;
    i=r;   
}
if(f>0){
    cout<<"it is a mystery number";
}
else{
    cout<<"not a mystery number";
}
return 0;
}