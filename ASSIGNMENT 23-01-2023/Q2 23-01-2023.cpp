/*2. Code a recursive function to insert 
a number into a sorted array as void r
 insert (int A[ ] , int k ). Use this 
 function to Code a recursive insertion 
 sort as void  r sort (int A [ ] ) .*/

#include<iostream>
using namespace std;
int n;
cin>>n;
int a[n];
int find(int a[],int i=0){
	if(a[i+1]<a[i]){
		return i+1;
	}
}

int   findano(int a[],int g){
	static int i=0;
 if(i==0){
    g=find(a);i++;}
	if(a[g-1]<a[g]){ i=0;
		return g-1;
	}
	else{
		findano(a,g--);
	}
}

int exchang(int a[],int l,int m){
	findano(a,)
}

int main(){

return 0;
}

