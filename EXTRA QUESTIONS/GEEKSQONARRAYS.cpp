#include<iostream>
using namespace std;

int main(){
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
		for(int i=0;i<n-1;i++){
		if(i%2==0){
if(a[i+1]<a[i]){
	int t=a[i+1];
	a[i+1]=a[i];
	a[i]=t;
}
		}
		else{
		if(a[i+1]>a[i]){
	int t=a[i+1];
	a[i+1]=a[i];
	a[i]=t;
}	
		}
	}
	for(int i=0;i<n;i++){
		cout<<a[i]<<" ";
	}	
	return 0;
}
