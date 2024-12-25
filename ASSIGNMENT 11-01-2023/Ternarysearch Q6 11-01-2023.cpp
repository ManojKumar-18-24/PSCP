#include<iostream>
using namespace std;


int ternarysearch(int a[],int end,int start,int k){
	
 int mid1=start+(end-start)/3;	
 int mid2=end-(end-start)/3;
    if(mid1>=mid2){
    	if(k==start)
    	{
    		return start;
		}
		else
		{
			return -1;
		}
	}
 	else if(k==a[end-1]){
 		return end-1;
	 }
 	else if(k==a[mid1]){
 		return mid1;
	 }
		if(k==a[mid2]){
 		return mid2;
	 }
	else if(k<a[mid1]){
		ternarysearch(a,mid1-1,start,k);
	}
else if(k>a[mid2]){
		ternarysearch(a,end,mid2+1,k);
	}
else{
	ternarysearch(a,mid2-1,mid1+1,k);
}		
}

int main(){
		int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	int k;
	cout<<"key? ";
	cin>>k;
  cout<<ternarysearch(a,n,0,k);
	
}
