#include<iostream>
using namespace std;

int main(){
int a,b,c;
cin>>a>>b>>c;
a>b && a>c ? cout<<a:cout<<"" ;
a<b && b>c ? cout<<b:cout<<""  ;
c>b && a<c ? cout<<c:cout<<""  ;
return 0;
}