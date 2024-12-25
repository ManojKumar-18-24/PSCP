#include<iostream>
#include<cstring>
#include<string>
using namespace std;

int function1(string s,int i,int j){
if(i>=j){
	return 1;
}		
else	if(i<j){
	
	 if(s[i+1]==s[j-1]){
	 	return function1( s, i+1, j-1);
	 }
	 else{
	 	return 0;
	 }
}

}



void function2(string s,int n,int i=0,int j=2){
	static int max,r,w,l=0;
	if(i==n-2){
		for(int e=w;e<=r;e++){
			cout<<s[e];
		}
		
	}
	
else	if(j==n){
			function2(s,n,i+1,i+2);
	}
else if(s[i]==s[j]){
	int u;
	u=function1(s,i,j);
	if(u!=0){
	if(l==0){l++;
	max=j-i;
		r=j;
		w=i;}
		if(j-i>max){
			max=j-i;
			r=j;
		w=i;
		}
	}
		function2(s,n,i,j+1);
}
else{
	function2(s,n,i,j+1);
}		
}


int main(){
	string s;
	getline(cin,s);
	int r=s.length();
	
	function2(s,r);
	return 0;
}
