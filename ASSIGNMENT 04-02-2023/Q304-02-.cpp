#include<iostream>
using namespace std;

void iteconcatenation(char *sh,char *ch)
{   
    while(*sh!='\0'){sh++;}
    while(*ch!='\0'){*sh=*ch;sh++;ch++;}
    *sh='\0';
}

void recconcatenation(char *sh,char *ch)
{    static int p=0;
  if(*ch=='\0'){;*sh='\0';}
  else if(p==1)
  {
    *sh=*ch;sh++;ch++;
    recconcatenation(sh,ch);
  }
  else if(*sh=='\0')
  {
    p++;recconcatenation(sh,ch);
  }
  else
  {
    sh++;recconcatenation(sh,ch);
  }
}

void itecopy(char *sh,char *ch)
{
    while(*sh!='\0')
    {
        *ch=*sh;ch++;sh++;        
    }
    *ch='\0';
}

void reccopy(char *sh,char *ch)
{
    if(*sh=='\0')
    {
    ;*ch='\0';
    }
    else
    {
        *ch=*sh;ch++;sh++;
        reccopy(sh,ch);
    }
}

void length(char *ch)
{   int c=0;
    while(*ch!='\0'){c++;ch++;}
    cout<<c;
}

void reclength(char *ch)
{
    static int c=0;
    if(*ch=='\0'){cout<<c;}
    else{ c++;ch++;reclength(ch);}
}

int main(){
char a[1000]="manojkumar";char b[1000];
length(&a[0]);cout<<endl;
reclength(&a[0]);cout<<endl;
itecopy(&a[0],&b[0]);cout<<b;cout<<endl;
reccopy(&a[0],&b[0]);cout<<b;cout<<endl;
iteconcatenation(&a[0],&b[0]);cout<<a<<endl;
recconcatenation(&a[0],&b[0]);cout<<a<<endl;
return 0;
}