#include<iostream>
#include<string>
#include<array>
#include<algorithm>
using namespace std;

union four
{
  char a;
  char b[100];
  int c;
  float d;
};

struct wpl
{  
   int flag;
  four array;
};

int main()
{  int n;cin>>n; 
     wpl f[n];
    
    for(int i=0;i<n;i++) 
      { cout<<"flag: ";
       cin>>f[i].flag;
    if(f[i].flag==1){cout<<"ch=";cin>>f[i].array.a;}
    if(f[i].flag==2){cout<<"str=";cin>>f[i].array.b;}
    if(f[i].flag==3){cout<<"int =";cin>>f[i].array.c;}
    if(f[i].flag==4){cout<<"flt=";cin>>f[i].array.d;}        
      } int min,r;
      
    for(int i=0;i<n-1;i++)
    {  min=f[i].flag;int w=0;
       for(int j=i+1;j<n;j++)
         {
            if(f[j].flag<min){min=f[j].flag;r=j;w++;}
         }
        if(w>0)
         {
           wpl t=f[i];
           f[i]=f[r];
          for(int j=r;j>i+1;j--) f[j]=f[j-1];
          f[i+1]=t;
         }
    }
    for(int i=0;i<n;i++) 
      { 
          if(f[i].flag==1){cout<<f[i].array.a<<" ";}
          if(f[i].flag==2){cout<<f[i].array.b<<" ";}
          if(f[i].flag==3){cout<<f[i].array.c<<" ";}
          if(f[i].flag==4){cout<<f[i].array.d<<" ";}        
      } 
return 0;
}