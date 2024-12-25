#include<iostream>
#include<cstring>
#include<string>
using namespace std;

int sorting(char s[],int i,int j,int u){
int min;
for(int w=i;w<=j;w++){
    min=s[w];int p=0,r;
    for(int e=w+1;e<=j;e++){
        if(s[e]<min){
           r=e;
            p++;
            min=s[e];
        }
    }
    if(p>0){
        char temp=s[w];
        s[w]=min;
        s[r]=temp;
    }
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
    q=sorting(s,a[r],a[r+1],a[r]+1);
    }
    else{
    q=sorting(s,a[r]+2,a[r+1],a[r]+3);  }
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