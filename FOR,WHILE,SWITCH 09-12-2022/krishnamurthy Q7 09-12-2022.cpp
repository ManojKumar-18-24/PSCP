#include<iostream>
using namespace std;

int main(){
int n;
cin>>n;
int j=n;
int sum=0;
int p=1;
while(n>0){
    int g=n%10;
    
    for(int i=1;i<=g;i++){
      p*=i;
    }
    sum+=p;
    p/=p;
    n/=10;
}
if(sum==j){
    cout<<"krishnamurthy number";
}
else{
    cout<<"not a krishnamurthy number";
}
return 0;
}