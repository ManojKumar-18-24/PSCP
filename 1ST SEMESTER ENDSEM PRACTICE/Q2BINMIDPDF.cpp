#include<iostream>
using namespace std;

int binary(int n)
{   static int sum=0;
    if(n==0){;}
    else
      {
        binary(n/2);
        sum=sum*10+n%2;
      }
}

int bitdifferences(int n,int m)
{  int sum1,sum2;
   
   

}

int main()
{
  int n;cin>>n;
  int a[n];for(int i=0;i<n;i++){cin>>a[i];}
  int sum=0;
  for(int i=0;i<n-1;i++)
  {
    for(int j=i+1;j<n;j++)
    {
        sum+=bitdifferences(a[i],a[j]);
    }
  }
return 0;
}