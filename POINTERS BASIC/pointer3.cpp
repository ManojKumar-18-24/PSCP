#include<iostream>
using namespace std;

void fact(int m,int *f)
{  if(m==0){;}
  else{(*f)*=m;cout<<*f;
  fact(m-1,f);}
}

int main(){
int k=5;
int m=1;
fact(k,&m);
cout<<m;
return 0;
}