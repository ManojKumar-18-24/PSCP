#include<iostream>
using namespace std;

int main(){
int y;
cin>>y;
int u=1;
int sum=0;
for(int i=1;i<=y;i++){
   sum+=u;
   u = u*10 + 1;
}
cout<<sum;
return 0;
}
