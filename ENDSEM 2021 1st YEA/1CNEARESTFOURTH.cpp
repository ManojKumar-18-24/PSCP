#include<iostream>
using namespace std;

void function(float n,float num,float den)
{
  float a=num/den; //cout<<a<<endl;
  if(a<0.125){num=0;den=0;}
  else if(a>=0.125 && a<0.375){num=1;den=4;}
  else if(a>=0.375 && a<0.6){num=1;den=2;}
  else if(a>=0.6 && a<0.875){num=3;den=4;}
  else{n++;num=0;den=0;}
  cout<<n<<" "<<num<<"/"<<den<<endl;
}

int main()
{
   float n,num,den;
  cin>>n>>num>>den;
  function(n,num,den);
return 0;
}