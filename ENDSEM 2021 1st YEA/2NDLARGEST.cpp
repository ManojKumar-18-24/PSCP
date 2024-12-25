#include<iostream>
using namespace std;

void recursion(int i=0)
{   static int p=0,max,min,k,b;
    int n;
    cin>>n;
    if(n==-1){;}
    else
    {  if(i==0){max=n;b=n;recursion(i+1);}
       else
       {  if(n>max){max=n;}
          recursion(i+1);
          if(p==0 && max-n>0){min=max-n;k=n;p++;}
          else if(max-n<min && max-n>0){min=max-n;k=n;}
           if(i==1)
          {  if(max-b>0 && max-b<min){k=b;}
              cout<<k<<endl;
          }
       }
    }
}

int main()
{
   recursion();
   return 0;
}