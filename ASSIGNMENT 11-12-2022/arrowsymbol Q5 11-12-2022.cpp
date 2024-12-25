#include<iostream>
using namespace std;

int main(){
 int y;
 cout<<"enter an odd no.b/w 3 & 79: ";
 cin>>y;

 for(int i=1;i<=2*y-1;i++){
    if(i<y){
      for(int j=1;j<=(y-1)/2;j++){
         cout<<".";
      }
      for(int j=1;j<=y;j++){
      if(i==1){
         cout<<"#";
      }
      else{
         if(j==1 || j==y){
            cout<<"#";
         }
         else{
            cout<<".";
         }
      }
      }
      for(int j=1;j<=(y-1)/2;j++){
         cout<<".";
      }
    }
  else if(i==y){
      for(int j=1;j<=(y+1)/2;j++){
         cout<<"#";
      }
      for(int j=1;j<=(y-2);j++){
         cout<<".";
      }
      for(int j=1;j<=(y+1)/2;j++){
         cout<<"#";
      }

   }
   else{
      for(int j=1;j<=(i-y);j++){
         cout<<".";
      }
      cout<<"#";
       for(int j=1;j<=(4*y-2*i-3);j++){
         cout<<".";
      }
      if(i!=(2*y-1)){
      cout<<"#";
      }
      for(int j=1;j<=(i-y);j++){
         cout<<".";
      }
   }
   cout<<endl;
 }
return 0;
}