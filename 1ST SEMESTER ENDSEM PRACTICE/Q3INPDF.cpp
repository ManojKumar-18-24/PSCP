#include<iostream>
using namespace std;

int main()
{
  int n,r;
  cout<<"size: ";
  cin>>n;
  cout<<"rotation factor: ";
  cin>>r;
  int a[7][7]={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,32,33,34,35,36,37,38,39,40,41,42,43,44,45,46,47,48,49};
  int p=0,
  e=n/2;
while(1)
{ for(int k=0;k<r;k++)
  { 
    int x=a[p][n-1-p];
  for(int j=n-1-p;j>=p+1;j--)
  {
    a[p][j]=a[p][j-1];
  } 
  int y=a[n-1-p][n-1-p];
  for(int i=n-1-p;i>=p+2;i--)
  {
    a[i][n-1-p]=a[i-1][n-1-p];
  } a[p+1][n-1-p]=x;
  
   x=a[n-1-p][p];
  for(int j=p;j<n-p-2;j++)
  {
    a[n-1-p][j]=a[n-1-p][j+1];
  } a[n-1-p][n-2-p]=y;
  
  for(int i=p;i<n-p-2;i++)
  {
    a[i][p]=a[i+1][p];
  } a[n-p-2][p]=x;

  }
  p++;
  if(p==e){break;}
  for(int k=0;k<r;k++)
  { 
    int x=a[p][p];
  for(int j=p;j<=n-2-p;j++)
  {
    a[p][j]=a[p][j+1];
  } int y=a[n-1-p][p];
  for(int i=n-1-p;i>=p+2;i--)
  {
    a[i][p]=a[i-1][p];
  } a[p+1][p]=x;
   x=a[n-1-p][n-1-p];
  for(int j=n-1-p;j>=p+2;j--)
  {
    a[n-1-p][j]=a[n-1-p][j-1];
  } a[n-1-p][p+1]=y;
  for(int i=p;i<n-p-2;i++)
  {
    a[i][n-1-p]=a[i+1][n-1-p];
  } a[n-2-p][n-p-1]=x;
  }
   
p++; if(p==e){break;}
}
 for(int k=0;k<n;k++){for(int l=0;l<n;l++){cout<<a[k][l]<<" ";if(a[k][l]<10){cout<<" ";}}cout<<endl;}
return 0;
}