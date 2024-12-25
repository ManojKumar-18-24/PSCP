#include<iostream>
using namespace std;

int main()
{
  int n,x=0,y=1,sum=1;
  cin>>n;int a[n];for(int i=0;i<n;i++){cin>>a[i];}
  int max=a[0];
  while(sum<n)
    {
        if(a[sum]>max) max=a[sum];
         x=y;y=sum;sum=x+y;
    }
    cout<<max;
return 0;
}