#include<iostream>
using namespace std;

void    u(int a[],int b[],int n1,int n2,int i=1,int w=0,int j=0,int y=0,int z=0){
static int c[100],p=1;

if(w==n2){  c[0]=a[0]; cout<<endl;
    for(int i=0;i<p;i++){
        cout<<c[i]<<" ";
    }
}
else if(z==w && i==n1 && w!=0){
    c[p]=b[w];cout<<"c["<<p<<"]="<<c[p]<<" ";
    p++;
 u(a,b,n1,n2,i,w+1,0,0,0); 
}
else if(y==n1){
    if(w==0){
        c[p]=b[0];cout<<"c["<<p<<"]="<<c[p]<<" ";
        p++;
        u(a,b,n1,n2,i,w+1,0,0,0);
    }
    else{
   if(b[w]==b[z]){
     u(a,b,n1,n2,i,w+1,0,0,0);
   }
   else{
    u(a,b,n1,n2,i,w,0,y,z+1); 
   }
   }
}
else if(i==n1){
if(b[w]==a[y]){
 u(a,b,n1,n2,i,w+1,0,0,0);    
}
else{
 u(a,b,n1,n2,i,w,0,y+1,0);     
}
}  
else if(j==i){
    c[p]=a[i];cout<<"c["<<p<<"]="<<c[p]<<" ";
    p++;
     u(a,b,n1,n2,i+1,0,0,0,0);
}
else{
    if(a[i]==a[j]){
        u(a,b,n1,n2,i+1,0,0,0);
    }
    else{
      u(a,b,n1,n2,i,0,j+1,0,0); 
    }
}
}

int main(){
int n1,n2;
cout<<"size of a: ";
cin>>n1;
int a[n1];
for(int i=0;i<n1;i++){
    cout<<"a["<<i<<"] = ";
    cin>>a[i];
}
cout<<"size of b: ";
cin>>n2;
int b[n2];
for(int i=0;i<n2;i++){
    cout<<"b["<<i<<"] = ";
    cin>>b[i];
}  cout<<"c[0]="<<a[0]<<" ";
u(a,b,n1,n2);
return 0;
}