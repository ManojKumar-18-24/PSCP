#include<iostream>
#include<cstring>
using namespace std;

void copy(char *s,char *p,char ch)

{    //cout<<*s<<" "<<ch;
    
    if(*s==ch){*p=*s;} 
   else{ *p=*s;//cout<<*p;
   p++;s++;copy(s,p,ch);}   
}

int main(){   
char a[3],b[3];
for(int i=0;i<3;i++)cin>>a[i];
copy(&a[0],&b[0],a[2]);
for(int i=0;i<3;i++)cout<<b[i];
return 0;
}