#include<iostream>
using namespace std;


void frequency(string s,int u,int i=0,int j=0){
static int p=0,h,max;
if(i==u){
cout<<char(h)<<" has maximum frequency of "<<max;
}
else if(j==u){
   if(i==0) {max=p;h=s[0];}
   else if(p>max){max=p;h=s[i];}
   p=0;
frequency(s,u,i+1,0);

}
else if(s[i]==s[j]){
    p++;
    frequency(s,u,i,j+1);
}
else{
    frequency(s,u,i,j+1);
}

}

int main(){
string str;
getline(cin,str);
int u=str.length();
frequency(str,u);
return 0;
}