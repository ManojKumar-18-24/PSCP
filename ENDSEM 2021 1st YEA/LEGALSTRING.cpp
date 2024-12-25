#include<iostream>
#include<string>
#include<cstring>
using namespace std;



int prime(int n)
{  static int m=2,i=0;
  if(m==n){return true ;}
  else
  {
    if(n%m==0){return false;} m++;prime(n);
  }
}

int main()
{
  string str;cin>>str;int c=0;
  for(int i=0;i<str.length();i++)
  {
    if(str[i]=='a' || str[i]=='e'|| str[i]=='i'|| str[i]=='o'||str[i]=='u')
    {
         c++;
    }
  }
int h=prime(c);int q,w;
if(h!=0)
{  
     for(int i=0;i<str.length();i++)
  {
    if(str[i]=='a' || str[i]=='e'|| str[i]=='i'|| str[i]=='o'||str[i]=='u')
    {
        if( i==str.length()-1){q=0;w=str.length()-2;}
        else if(i==0){q=1;w=str.length()-1;}
        else {q=i-1;w=i+1;} 
        char g=str[q];str[q]=str[w];str[w]=g;
    }
  }
  cout<<str;
}
else{
    cout<<"ill";
}
return 0;
}