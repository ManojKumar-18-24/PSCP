#include<iostream>
using namespace std;

int main(){
int u;
cin>>u;

for(int i=1111;i<=9999;i++){
  int p=i,r=i;
  int y=0,f=0;
while(r>0){
  int s=r%10;
  if(s==0){
    f++;
  }
  r/=10;
}
  while(p>0){
    int e=p%10;
    if(e!=0){
    if(u%e!=0){
      y++;
    }
    }
    
    p/=10;
  }
  if(y==0 && f==0){
    cout<<i<<" ";
  }
  else{
    continue;
  }
}


return 0;
}