#include<iostream>
#include<string>
#include<cstring>
#include<algorithm>
using namespace std;

int main(){
string str,a[100];
cin>>str;char g;int s=0;
sort(str.begin(),str.end());int p=0;a[p]+=str[str.length()-1];cout<<str<<endl;
for(int i=str.length()-1;i>0;i--)
{
    if(str[i-1]==str[i]){a[p]+=str[i-1];}
    else{p++;a[p]+=str[i-1];}
}
for(int i=0;i<=p;i++)
{cout<<a[i]<<" ";}cout<<endl;
 string h;
for(int i=0;i<=p;i++)
{
  if(a[i].length()%2==0)
  {
      for(int j=0;j<=a[i].length()/2-1;j++)
      {
        h+=a[i][j];
      }
  }
  else
  {  if(s==0){g=a[i][0];s++;}
     if(a[i].length()>1)
     {
        for(int j=0;j<a[i].length()/2;j++)
        {
            h+=a[i][j];
        }
     } 
  }
}  
string q=h;
if(s==1){h+=g;}
for(int i=q.length()-1;i>=0;i--)
{
    h+=q[i];
}
cout<<h<<endl;
return 0;
}