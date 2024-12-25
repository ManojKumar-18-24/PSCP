#include<iostream>
using namespace std;

void recursion(int n,int m)
{  static int i=1,p=0;
  
  if(i<=n)
  {  if(m-p==0){cout<<"cakes over at "<<i<<endl;}
     else if(m-p<i){cout<<"stopped at "<<i;}      
    else
    {   cout<<i<<" gets "<<i<< " cakes"<<endl;
         p+=i;i++;
       recursion(n,m);
    }
  }
  else
  {  cout<<"cakes left= "<<m-p<<endl;
     cout<<"next round"<<endl;
     i=1;m=m-p;
     p=0;
     recursion(n,m);
  }
}

int main()
{
int n,m;
cin>>n>>m;
recursion(n,m);
return 0;
}