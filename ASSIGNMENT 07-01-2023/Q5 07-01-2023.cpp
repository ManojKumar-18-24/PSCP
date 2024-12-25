#include<iostream>
#include<cstring>
#include<string>
using namespace std;


void Capital(char s[],int n,int i=0){
static int p=0;
 if((int)s[0]>90 && p==0){
    p++;
    s[0]-=32;
    Capital(s,n,i+1);
}
else if(i==(n-1)){
    ;}
else if((int)s[i]==32){
 if((int)s[i+1]>90){s[i+1]-=32;}
    Capital(s,n,i+2);
}
else{
    Capital(s,n,i+1);
}

}

int main(){
char S[1000];
gets(S);
int n=strlen(S);
Capital(S,n);
cout<<S;
return 0;
}