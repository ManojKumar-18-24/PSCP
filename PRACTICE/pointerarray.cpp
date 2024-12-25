#include<iostream>
using namespace std;

int main(){
int a[5];
int *p;
p=(a+3);
*p=30;
p--;
*p=20;
p=(a);
*p=10;
*(a+4)=40;
p++;
*p=0;
for(int i=0;i<5;i++){cout<<a[i]<<" ";}
return 0;
}