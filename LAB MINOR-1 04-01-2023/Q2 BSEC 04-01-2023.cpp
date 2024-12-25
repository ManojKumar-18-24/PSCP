#include<iostream>
using namespace std;


int main(){
int n,r,z;
cout<<"enter a positive integer: ";
cin>>n;
int a[n];
for(int i=0;i<n;i++){
    a[i]=i+1;
}
while(1){
    for(int i=0;i<n;i++){
    if(i%2==0){
        a[i]=0;
    }   
} 
 z=0;
    for(int i=0;i<n;i++){
      if(a[i]!=0){ r=i;
       z++;
      } 
}
if(z==1){cout<<a[r];break;}
 int m=0;
    for(int i=0;i<n;i++){
        if(a[i]!=0){
       a[m]=a[i];
          m++;}
       if(m<i){
        a[i]=0;
       }
    
      } 
     
 z=0;
    for(int i=0;i<n;i++){
      if(a[i]!=0){ r=i;
       z++;
      } 
}
if(z==1){cout<<a[r];break;}
    for(int i=0;i<n;i++){
    if(i%2!=0){
        a[i]=0;
    }   
} 
 z=0;
    for(int i=0;i<n;i++){
      if(a[i]!=0){ r=i;
       z++;
      } 
}
if(z==1){cout<<a[r];break;}
 m=0;
    for(int i=0;i<n;i++){
      if(a[i]!=0){
         if(a[i]!=0) { a[m]=a[i];  m++;}
       if(m<i){
        a[i]=0;
       }
     
      } 
} 
 z=0;
    for(int i=0;i<n;i++){
      if(a[i]!=0){ r=i;
       z++;
      } 
}
if(z==1){cout<<a[r];break;}
}
return 0;
}