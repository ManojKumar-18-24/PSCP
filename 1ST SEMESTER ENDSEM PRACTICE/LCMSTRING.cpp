#include<iostream>
#include<cstring>
#include<string>
using namespace std;

void lcm(string s,string p)
{  string n=s,m=p;
   int z=s.length(),y=p.length();
   int i=z;
   while(1)
   {
    if(i%z==0 && i%y==0){break;}
     i++;
   }
   int k=i/z;
   for(int j=1;j<k;j++)
   {
    s+=n;//cout<<p<<endl;
   }  k=i/y;
   for(int j=1;j<k;j++)
   {
    p+=m;//cout<<s<<endl;
   }   
if(s==p){cout<<"LCM IS "<<s;}
else{cout<<"no lcm";}

}

int main()
{
  string str1,str2,s,p;
  cin>>str1>>str2;s=str1;p=str2;int e=0,f=0;
   if(s.length()<p.length())
  {
   int j=p.length()/s.length();
   for(int i=1;i<j;i++)
   {
    s+=str1;
   }
   if(s==p){e++;}
  }
  else
  {
    int j=s.length()/p.length();
   for(int i=1;i<j;i++)
   {
    p+=str2;
   }
   if(s==p){f++;}
  }
  //L.C.M-->
    if(e==1){cout<<"LCM = "<<str2;}
    else if(f==1){cout<<"LCM = "<<str1;}  
    else
    {
        cout<<"NOT DIV "<<endl;lcm(str1,str2);
    }                                 
 
return 0;
}