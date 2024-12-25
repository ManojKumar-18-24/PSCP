#include<iostream>
#include<cstring>
#include<string>
using namespace std;

int palindrome(char s[],int i,int j){
    if(i>=j){
        return 1;
    }
else if(i<j){
    if(s[i]==s[j]){
        palindrome(s,i+1,j-1);
    }
    else{
        return 0;
    }}
}

void find(char s[],int u){
 int a[100],i=1;
 a[0]=0;
for(int j=1;j<u-1;j++){
    if((int)s[j]==32){
        a[i]=j-1;
        i++;
    }
}
a[i]=u-1;
i++;
for(int r=0;r<i-1;r++){
    int q;
    if(r==0){
    q=palindrome(s,a[r],a[r+1]);
    if(q==1) {   int d=a[r];
     int h=a[r+1];
     for(int e=d;e<=h;e++){
        s[e]='*';
     }}
    }
    else{
    q=palindrome(s,a[r]+2,a[r+1]);  
    if(q==1){ int d=a[r]+2;
     int h=a[r+1];
     for(int e=d;e<=h;e++){
        s[e]='*';
     }}}
}

}

int main(){
char S[1000];
gets(S);
int n=strlen(S);
find(S,n);
cout<<S;
return 0;
}