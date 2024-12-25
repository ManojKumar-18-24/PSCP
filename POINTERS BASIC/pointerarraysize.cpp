#include<iostream>
#include<string>
using namespace std;

void count(char *p)
{     int c=0;
    while(*p!='\0'){c++;p++;}
    cout<<c;
}

int main(){
char b[1000];
int i=0;
cin>>b[0];i++;
while(b[i-1]!='z')
{
    cin>>b[i];i++;
}
count(&b[0]);
return 0;
}