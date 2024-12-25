#include<iostream>
using namespace std;

void cocktailsort(int a[],int n){
static int p=0,u=0;

while(p+u<n){
  for(int i=p;i<n;i++){
  	if(a[i+1]<a[i]){
  		int t=a[i];
  		a[i]=a[i+1];
  		a[i+1]=t;
	  }	  
  }u++;
  for(int i=0;i<n;i++){
	cout<<a[i]<<" ";
}cout<<endl;
    for(int i=n-u;i>=0;i--){
  	if(a[i-1]>a[i]){
  		int t=a[i-1];
  		a[i-1]=a[i];
  		a[i]=t;
	  }
  }p++;	
  for(int i=0;i<n;i++){
	cout<<a[i]<<" ";
}cout<<endl;
}
for(int i=0;i<n;i++){
	cout<<a[i]<<" ";
}
}

int main(){
		int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	cocktailsort(a,n);
	return 0;
}
