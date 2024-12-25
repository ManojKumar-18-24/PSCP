#include<iostream>
using namespace std;

int increasing(int a[][5],int n,int i)
{    int j;
    for(j=0;j<4;j++)
     {
        if(a[i][j+1]>a[i][j]){;}
        else{break;}
     }
     if(j==4){return true;}
     else{return false;}
}

int decreasing(int a[][5],int n,int i)
{     int j;
    for( j=0;j<4;j++)
     {
        if(a[i][j+1]<a[i][j]){;}
        else{break;}
     }
    if(j==4){return true;}
     else{return false;} 
}

int alternate(int a[][5],int n,int i)
{     int j=0; int m=a[i][j+1]-a[i][j];
    for( j=1;j<4;j++)
     {   int n=a[i][j+1]-a[i][j];
        if(m*n<0){;}
        else{break;} m=n;
     }
    if(j==4){return true;}
     else{return false;} 
}

int main()
{  int m;
  cin>>m;
  int a[m][5];
  for(int i=0;i<m;i++){for(int j=0;j<5;j++){cin>>a[i][j];}}
  for(int i=0;i<m;i++)
    {
        if(increasing(a,m,i)){cout<<"ROW "<<i<<" inc";}
      else   if(decreasing(a,m,i)){cout<<"ROW "<<i<<" dec";}
      else   if(alternate(a,m,i)){cout<<"ROW "<<i<<" alt";}
      else{cout<<"ROW "<<i<<" no ord";}
       cout<<endl; 
    }
return 0;
}