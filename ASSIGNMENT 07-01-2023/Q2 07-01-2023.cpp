#include<iostream>
#include<cstring>
#include<string>
using namespace std;

int unique(char s[],int i,int j=0){
if(j==i){
  return 1;
}
else if(s[j]==s[i]){
return 0;
}
else{
  unique(s,i,j+1);
}

}

void search(char a[],int n,int i=0,int j=0){
static int f=0;
if(i==(n)){
;
}
else if(j==n){
  if(f==1){cout<<a[i]<<" is  present, not repeated"<<endl;}
  else{cout<<a[i]<<" is repeated "<<f<<" times"<<endl;}
  f=0;
     search(a,n,i+1,0);
}
else if(unique(a,i)==1){
if(i==0){
  if(a[i]==a[j]){
     f++;
     search(a,n,i,j+1);
  }
 else{
  search(a,n,i,j+1);}
}
else{
  if(a[i]==a[j]){
    f++;
   search(a,n,i,j+1);
  }
 else{
  search(a,n,i,j+1);}
}
}
else{
  search(a,n,i+1,0);
}
}

int main(){
char S[1000];
gets(S);
int n=strlen(S);
search(S,n);
return 0;
}