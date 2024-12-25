#include<iostream>
using namespace std;

int bulbs(int a[],int n)
{   
     static int i=2,p=0,c=0;
  if(i==n+1 && p==n){return c;}
  else if(i==n+1)
  {
       if(a[p]==1){
        c++;  }
       p++;bulbs(a,n);
  }
  else if(p==n+1)
  {  for(int q=0;q<n;q++){cout<<a[q]<<" ";}cout<<endl;
     i++;p=0;
     bulbs(a,n); 
  }
  else if(p<=n)
  {
      if(p%i==0)
      { 
        if(p>=1)
        {
            if(a[p-1]==1)
            {a[p-1]=0;}
        else{a[p-1]=1;}  
        }
      }
      p++;bulbs(a,n);
  }
 
}

int main(){
int n;
cout<<"no.of bulbs: ";
cin>>n;
int a[n];
for(int q=0;q<n;q++){a[q]=1;}
cout<<bulbs(a,n);
return 0;
}