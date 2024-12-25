#include<iostream>
using namespace std;

void path(int a[][4],int v[][4],int r,int sx,int sy,int dx,int dy)
{
  static int i=sx,j=sy;v[i][j]=1;
  if(i==dx && j==dy){cout<<"yes";}
  else
  {  int p=0;
      
      if(v[i-1][j]==0 && a[i-1][j]%2==0 && i-1>=0)
       {
        p++;i--;path(a,v,r,sx,sy,dx,dy);
       }
       if(v[i][j+1]==0 && a[i][j+1]%2==0 && j+1<4)
       {
        p++;j++;;path(a,v,r,sx,sy,dx,dy);
       }
       if(v[i+1][j]==0 && a[i+1][j]%2==0 && i+1<r)
       {
        p++;i++;path(a,v,r,sx,sy,dx,dy);
       }
       if(v[i][j-1]==0 && a[i][j-1]%2==0 && j-1>=0)
       {
        p++;j--;path(a,v,r,sx,sy,dx,dy);
       }
       if(p==0){cout<<"no";}
  }

}
int main()
{  int m;
  cin>>m;
  int a[m][4],v[m][4];
  for(int i=0;i<m;i++){for(int j=0;j<4;j++){cin>>a[i][j];v[i][j]=0;}}
 int sx,sy,dx,dy;
 cin>>sx>>sy>>dx>>dy;
 path(a,v,4,sx,sy,dx,dy);
return 0;
}