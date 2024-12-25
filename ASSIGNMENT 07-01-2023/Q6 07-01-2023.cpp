#include<iostream>
#include<cstring>
#include<string>
using namespace std;

void fullform(string s,int t){
    static int p=0,h=0;
    if(t==1 && h==0){ h++;
         s.erase(2,1);
        s[1]=46;
         if((int)s[0]>90){
    s[0]-=32;
   }
        cout<<s<<endl;}
    else if(p==0){
      if((int)s[t]==32){
        p++;
           if((int)s[t+1]>90){
    s[t+1]-=32;
   }
        fullform(s,t-1);

      }
      fullform(s,t-1);
    }
    else{
if((int)s[t-2]==32){
    s.erase(t+1,1);
   s[t]=46;
   if((int)s[t-1]>90){
    s[t-1]-=32;
   }
     fullform(s,t-3);}
   else{
    s.erase(t,1);
    fullform(s,t-1);
   }
}

    }


int main(){
/*char S[1000];
gets(S);
int n=strlen(S);*/
string str;
getline(cin,str);
int u=str.length();
fullform(str,u-1);
return 0;
}