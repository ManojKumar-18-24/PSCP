#include<iostream>
using namespace std;
 
int c=0;

void count(int a[3][3],int n,int key,int sum=0,int i=0,int j=0)
{  
    sum+=a[i][j];
  if(i==2 && j==2)
  { 
      if(sum==key){c++;} 
  }
  else
  {
    if(j<2){count(a,n,key,sum,i,j+1);}
    if(i<2){count(a,n,key,sum,i+1,j);}
  }
}

void path(int a[3][3],int n,int sum=0,int i=0,int j=0)
{  static int b[100],d=0;
    sum+=a[i][j];
  if(i==2 && j==2)
  {   b[d]=sum;d++;int g=0;
    for(int k=0;k<d-1;k++)
       {
        if(b[k]==sum){g++;}
       }
       if(g==0)
       {  
         count(a, n,sum);if(c>1) {cout<<sum<<" "<<c<<endl;}
         c=0;sum=0;
       }
       g=0;
  }
  else
  {
    if(j<2){path(a,n,sum,i,j+1);}
    if(i<2){path(a,n,sum,i+1,j);}
  }
}

int main()
{
// int n;
// cin>>n;
int a[3][3]={-5,1,1,1,1,1,1,1,2};
//for(int i=0;i<n;i++){for(int j=0;j<n;j++){cin>>a[i][j];}}
path(a,3);
return 0;
}