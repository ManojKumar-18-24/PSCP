#include<iostream>
#include<string>
#include<cstring>
using namespace std;

int main()
{
  string str;
  cin>>str;int a[str.length()];
    for(int i=0;i<str.length();i++){a[i]=(int)str[i]-48;}int i=0,d,sum=0;
  while(i<str.length())
  {
     if(i==0){d=a[0];}
    else{d=sum;sum=0;} int j=i+1;
    while(j<str.length())
    {
        sum=sum*10+a[j];
        if(sum==2*d){break;} j++;
    }
    if(j>=str.length() && sum!=2*d){break;}
    if(j==str.length()-1 && sum==2*d){i=str.length();break;}
    else{i=j;}
  }
  if(i>=str.length()) cout<<"yes";
  else cout<<"no";

return 0;
}