#include<iostream>
#include<string>
using namespace std;

int reverse(int n)
{ static int sum=0;
    if(n==0){int p=sum;sum=0;return p;}
    else {
       sum=(sum)*10+n%10;reverse(n/10); 
    }
}

int main(){
string s="12345678910";
string p="11";
int n;cin>>n;int z;
while(true)
{  s+=p;
  int sum=0;
  for(int i=0;i<p.length();i++)
  {
    sum=(sum*10)+((int)p[i]-48);
  }
  sum++;int k=sum;z=0;
  while(1){if(k%10==0){z++;k/=10;}else{break;}}
  if(sum>=n){break;}
  int r=reverse(sum); p.erase(0,p.length());
  while(r>0)
  {   k=r%10;k+=48;
      p+=(char)k;
      r/=10;
  }
  for(int o=1;o<=z;o++){p+='0';}
}
cout<<s[n];
return 0;
}