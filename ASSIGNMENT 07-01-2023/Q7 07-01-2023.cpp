#include<iostream>
#include<cstring>
#include<string>
using namespace std;

int deleteconsonant(char s[],int n){
 if(n==0){;}
else if((int)s[n-1]==97 ||(int)s[n-1]==65 || (int)s[n-1]==101 ||(int)s[n-1]==69 ||(int)s[n-1]==105 ||(int)s[n-1]==73||(int)s[n-1]==111||(int)s[n-1]==79||(int)s[n-1]==85||(int)s[n-1]==117){
    ;
     deleteconsonant( s, n-1);
}
else{
    if((int)s[n-1]==44 ||(int)s[n-1]==46||(int)s[n-1]==32){
        ;
         deleteconsonant( s, n-1);
    }
   else{ s[n-1]=127;
       deleteconsonant( s, n-1);}
}
}

int main(){
char S[1000];
gets(S);
int n=strlen(S);
   deleteconsonant( S, n-1);
   cout<<S;
return 0;
}