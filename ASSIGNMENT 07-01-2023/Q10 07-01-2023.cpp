#include<iostream>
#include<cstring>
#include<string>
using namespace std;

int reverse(char s[],int i,int j){
    if(i>=j){
        ;
    }
else if(i<j){
  char temp=s[j];
  s[j]=s[i];
  s[i]=temp;
  reverse(s,i+1,j-1);
}
}

void find(char s[],int u){
 int a[100],i=1;
 a[0]=0;
for(int j=1;j<u-1;j++){
    if((int)s[j]==32 || (int)s[j]==44||(int)s[j]==46){
        a[i]=j-1;
        i++;
    }
}
a[i]=u-1;
i++;
for(int r=0;r<i-1;r++){
    int q;
    if(r==0){
    q=reverse(s,a[r],a[r+1]);
    }
    else{
    q=reverse(s,a[r]+2,a[r+1]);  }
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