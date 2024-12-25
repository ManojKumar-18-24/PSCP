#include<iostream>
using namespace std;

int main(){
int i=1;int *p;p=&i;
for(*p;*p<=20;(*p)++){cout<<*p<<" ";}
return 0;
}