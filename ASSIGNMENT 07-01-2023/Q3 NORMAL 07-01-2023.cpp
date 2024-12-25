#include<iostream>
#include<cstring>
#include<string>
using namespace std;


int frequency(char s[],int n,int i,int j=0){
    static int f=0;
if(j==n){
    int p=f;
    f=0;
    return p;
}
else if(s[j]==s[i]){
f++;
 frequency(s,i,j+1);
}
else{
  frequency(s,i,j+1);
}
}

int main(){
char S[1000];
gets(S);
int n=strlen(S);
int a[n];
for(int i=0;i<n;i++){
    a[i]=frequency(S,n,i);
}

int max=a[0];
for(int i=1;i<n;i++){
if(a[i]>max){
    max =a[i];
}
}
for(int i=0;i<n;i++){
  if(a[i]==max){
    cout<<S[i]<<" is repeated "<<max<<" times"<<endl;
  }
}
return 0;
}