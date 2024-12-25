#include<iostream>
using namespace std;

void function(int n1,int n2,int b)
{  static int a[100];static int p=0,j=0,i=1,k=1,r=0;
if(i==p && n1==0 && j==p){cout<<k;}
else if(i== j && i!=0){if(r==0){k++;}r=0;j=0;i++;function(0,n2,b);}
 else if(n1==0)
  { if(p==0){cout<<"no common digits";}
    else
    {if(a[i]==a[j]){r++;}
       j++;
      function(0,n2,b);  
    }
  }
  else if(n2==0){function(n1/10,b,b);}
  else{  if(n1%10==n2%10){
    a[p]=n1%10;p++;
  }
    function(n1,n2/10,b);}
}

int main(){
int n1,n2;
cin>>n1>>n2;
function(n1,n2,n2);
return 0;
}