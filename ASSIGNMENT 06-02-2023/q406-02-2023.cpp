#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

void readarray(string *p,int n)
{   static int i=0;
  if(i==n){;}
  else {cin>>*(p+i);i++;readarray(p,n);}
}

void sortarray(string a[],int n)
{  static int i=0;
  if(i==n){;}
  else {sort(a[i].begin(),a[i].end());i++;readarray(a,n);}  
}

void printarray(string *p,int n)
{   static int i=0;
  if(i==n){;}
  else {cout<<*(p+i)<<" ";i++;printarray(p,n);}
}

int main()
{
  int n;
  cout<<"size =";cin>>n; string a[n];
  readarray(a,n);
  printarray(a,n);
  sortarray(a,n);
  printarray(a,n);
return 0;
}