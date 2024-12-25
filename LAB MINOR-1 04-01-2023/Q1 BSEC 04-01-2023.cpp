#include<iostream>
using namespace std;

 int digits(int a){
  static int i=0;
  if(a==0){
    return i;
  }
  else{
    i++;
    return digits(a/10);
  }
 }       

void putinthearray(int a[],int p,int j){
  static int i=0;
if(p==0){

}
else{
a[j-i-1]=p%10;
i++;
putinthearray(a,p/10,j);
}
}
int main(){
int n;
cout<<"enter a number: ";
cin>>n;
int p=n*n;
int j=digits(p);
int b[j];
putinthearray(b,p,j);
int c[j*(j+1)/2];
int i=0,m=0,q=0,a;
while(i<j){
   int sum=0;
if(q==0){ a=1;}
  for(int e=i;e<i+a;e++){
     sum=(sum)*10+b[e];
  }
  c[m]=sum;
  m++;q++;
  if(i+a==j){
    q=0;
   i++;
  }
  a++;
} 
  for(int e=0;e<j*(j+1)/2;e++){
    cout<<c[e]<<" ";
  }cout<<endl;
int z=0;
for(int i=0;i<j*(j+1)/2;i++){
  for(int e=0;e<j*(j+1)/2;e++){
    if(c[i]+c[e]==n && c[i]!=c[e]){
      cout<<c[i]<<"+"<<c[e]<<"="<<n<<endl;
       z++;
    }
  }
}
if(z>0){
  cout<<"it is a kaprekar number";
}
else{
  cout<<"it is not a kaprekar number";
}
return 0;
}