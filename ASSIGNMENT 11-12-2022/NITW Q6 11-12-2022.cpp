#include<iostream>
using namespace std;

int main(){
int n;
cout<<"enter a number b/w 3 & 1000: ";
cin>>n;
for(int i=1;i<=(2*n+2);i++){
   if(i==1){
      for(int j=1;j<=(n+1);j++){
         cout<<".";
      }
        for(int j=1;j<=(2*n+1);j++){
         cout<<"-";
      }
      for(int j=1;j<=(n+1);j++){
         cout<<".";
      }
   }
   else{
  if(i<=n+1 && i>=2) {
  for(int j=1;j<=n+2-i;j++){
    cout<<".";
   }
   cout<<"**";
   for(int j=1;j<=(2*n+2*i-5);j++){
      cout<<"-";
   }
   cout<<"**";
  for(int j=1;j<=n+2-i;j++){
    cout<<".";
   }
  } 
 else if(i==(n+2)){
   cout<<"**";
   for(int j=1;j<=(2*n-3);j++){
      cout<<"-";
   }
   cout<<"NITW!";
    for(int j=1;j<=(2*n-3);j++){
      cout<<"-";
   }
   cout<<"**";
  }
  else if(i>(n+2)){
   for(int j=1;j<=(i-n-3);j++){
      cout<<".";
   }
   cout<<"**";
   for(int j=1;j<=(6*n-2*i+5);j++){
      cout<<"-";
   }
   cout<<"**";
      for(int j=1;j<=(i-n-3);j++){
      cout<<".";
   }
  }
   }
  cout<<endl;
}
return 0;
}