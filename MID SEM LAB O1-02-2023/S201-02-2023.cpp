#include<iostream>
using namespace std;

int main(){
int n;
cin>>n;
int a[n][n];
int p=0,i=0,j=n-1,k=n*n, t=0;
while(true )
{      i=0,j=n-p-1;
    while(i<n-p && t==0)
    {
        a[i][j]=k;k--;if(i==0 && j==0){t++;break;}i++;
    } i--;j--;
    while(j>=0 && t==0)
    {
        a[i][j]=k;k--;if(i==0 && j==0){t++;break;}j--;
    }j++; i--;p++;
    while(j<n-p && t==0)
    {
        a[i][j]=k;k--;if(i==0 && j==0){t++;break;}j++;   
    } j--;i--;
    while(i>=0 && t==0)
    {  
        a[i][j]=k;k--;if(i==0 && j==0){t++;break;}i--;
    } p++;
    if(t>0){break;}
}

for(int k=0;k<n;k++)
{
    for(int l=0;l<n;l++)
    {
        cout<<a[k][l]<<" ";if(a[k][l]<10){cout<<" ";}
    }
    cout<<endl;
}
return 0;
}