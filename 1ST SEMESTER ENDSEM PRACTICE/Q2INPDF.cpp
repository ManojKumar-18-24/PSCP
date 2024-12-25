#include<iostream>
using namespace std;


void leapyear(int n1,int n2,int key,int a)
{  

if(n1==n2+1)
{
 ;
}
else if(n1==0)
{
    leapyear(a+1,n2,key,a+1);
}
else if(n1%10==key && a%4==0)
{
   cout<<a<<" ";leapyear(a+1,n2,key,a+1);
}
else
{
  leapyear(n1/10,n2,key,a);
}

}

int main(){
int n1,n2;
cin>>n1>>n2;
int key;cout<<"enter digit: ";
cin>>key;
leapyear(n1,n2,key,n1);
return 0;
}