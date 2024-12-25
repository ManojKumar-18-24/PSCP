#include<iostream>
using namespace std;

void insertionsort(int a[],int n){
	int u;
	for(int i=0;i<n-1;i++){
	if(a[i+1]<a[i]){
		u=0;
		for(int j=i;j>=0;j--){
			if(a[j]<a[i+1]){
				u=j+1;
				break;
			}
		}
		int e=i+1;
		int t=a[i+1];
		while(e>=u){
			a[e]=a[e-1];
			e--;	
		}
		a[u]=t;
		
	}	
		
		for(int i=0;i<n;i++){
		cout<<a[i]<<" ";
	}	
	cout<<endl;	
	}	
}

int main(){
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	insertionsort(a,n);
}
