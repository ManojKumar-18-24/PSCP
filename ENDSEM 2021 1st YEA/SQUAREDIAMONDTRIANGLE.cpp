#include<iostream>
#include<string>
#include<cstring>
using namespace std;

int main()
{
int n,m;char num;cout<<"size: ";cin>>n;
char a[n][n];for(int i=0;i<n;i++){for(int j=0;j<n;j++){a[i][j]='&';}}
string str;cin>>str;
cout<<"enter m : ";cin>>m;
cout<<"enter num: ";cin>>num;
if(str=="square")
{   
    if(n%2!=0)
    {  for(int i=0;i<n;i++)
     {
        for(int j=0;j<n;j++)
        {
            if(i>=n/2-m && i<=n/2+m)
              {
                if(j>=n/2-m && j<=n/2+m){a[i][j]=num;}
              }
        }
      }
    }
    else
    {
       for(int i=0;i<n;i++)
     {
        for(int j=0;j<n;j++)
        {
            if(i>=n/2-m && i<=n/2+m-1)
              {
                if(j>=n/2-m && j<=n/2+m-1){a[i][j]=num;}
              }
        }
      }

      

    }
}
if(str=="diamond")
{   
   if(n%2!=0) 
   {for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {   
            if(i+j>n-m-2 && i+j<n+m && i-j<m+1 && i-j>-m-1)
              {  
                a[i][j]=num;
              }
        }
    }
   }
   else
   {for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {   
            if(i+j>=n-m && i+j<=n+m && j-i<=m && j-i>=-m)
              {  if(i==n/2 && j==n/2-m ){cout<<i+j<<" "<<j-i<<endl;}
                a[i][j]=num;
              }
        }
   }   
}
}
if(str=="triangle")
{ 
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {   
            if(i<=n/2+m && i+j>=n-1-m && j-i<=m){a[i][j]=num;} 
        }
    } 
   
     
}
for(int i=0;i<n;i++){for(int j=0;j<n;j++){cout<<a[i][j]<<" ";}cout<<endl;}
return 0;
}