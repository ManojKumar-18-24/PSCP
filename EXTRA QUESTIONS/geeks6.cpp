/*Given an integer array coins[ ] of size N
 representing different denominations of 
 currency and an integer sum, find the number
  of ways you can make sum by using different
   combinations from coins[ ].  
Note: Assume that you have an infinite supply
 of each type of coin. 


Example 1:

Input:
sum = 4 , 
N = 3
coins[] = {1,2,3}
Output: 4
Explanation: Four Possible ways are:
{1,1,1,1},{1,1,2},{2,2},{1,3}.
Example 2:

Input:
Sum = 10 , 
N = 4
coins[] ={2,5,3,6}
Output: 5
Explanation: Five Possible ways are:
{2,2,2,2,2}, {2,2,3,3}, {2,2,6}, {2,3,5} 
and {5,5}.*/

#include<iostream>
using namespace std;

int *coins(int a[],int n,int key,int sum=0){
static int b[1000];static int  p=0;
if(sum==key){
b[p]=-1;p++;
return b;
}	
else if(sum>key){
b[p]=-1;p++;
return b;
}
else{
	for(int l=0;l<n;l++){ b[p]=a[l];p++;
		coins(a,n,key,sum+a[l]);
	}
}	
	
}

int main(){
	int sum,n;
	cout<<"sum=";
	cin>>sum;
	cout<<"n=";
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
int *g=coins(a,n,sum);	
for(int i=0;i<100;i++){
	cout<<g[i]<<" ";
}	
	return 0;	
}
