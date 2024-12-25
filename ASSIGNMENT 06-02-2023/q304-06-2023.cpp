#include<iostream>
using namespace std;

void combinations(char a[][2],char b[],int m,int i=0)
{
  if(i==m)
    {
        for(int j=0;j<m;j++){cout<<b[j];}cout<<" ";
    }
  else
    {
        b[i]=a[i][0];combinations(a,b,m,i+1);
        b[i]=a[i][1];combinations(a,b,m,i+1);
    }
}

int main()
{
int m;
cin>>m;
char a[m][2];
for(int i=0;i<m;i++)
{
    for(int j=0;j<2;j++)
    {
        cin>>a[i][j];
    }
}
char b[m];
combinations(a,b,m);
return 0;
}