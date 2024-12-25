#include<iostream>
using namespace std;

void inter(int a[],int b[],int c[],int n1,int n2,int n3,int i=0,int j=0,int k=0)
{ static int p=0;
if(i==n1){;
}
else if(k==n3){
	inter(a,b,c,n1,n2,n3,i+1,0,0);
}
else if(p>0){
	if(b[j]==c[k]){
		cout<<c[k]<<" ";p=0;
		inter(a,b,c,n1,n2,n3,i+1,0,0);
	}
	else{
		inter(a,b,c,n1,n2,n3,i,j,k+1);
	}
}
else if(j==n2){
	inter(a,b,c,n1,n2,n3,i+1,0,0);
}
else if(a[i]==b[j]){
	p++;
	inter(a,b,c,n1,n2,n3,i,j,0);
}
else{
	inter(a,b,c,n1,n2,n3,i,j+1,0);
}
}
int main(){
	
int n1,n2,n3;
cin>>n1>>n2>>n3;
int a[n1],b[n2],c[n3];	
for(int i=0;i<n1;i++){
	cin>>a[i];
}	
for(int i=0;i<n2;i++){
	cin>>b[i];
}
for(int i=0;i<n3;i++){
	cin>>c[i];
}
inter(a,b,c,n1,n2,n3);
return 0;
}
	
	
	
	
	
	

















