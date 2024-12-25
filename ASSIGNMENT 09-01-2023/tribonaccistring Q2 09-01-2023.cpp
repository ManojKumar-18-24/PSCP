#include<iostream>
#include<cstring>
#include<string>
using namespace std;


int tribonacci(char a[],int n,int j=0){
	static int p=0;
	
	if((j+3+p)<n && (a[j]+a[j+1]+a[j+2]-3*48)==a[j+3+p]-48){
		if((j+3+p)==(n-1)){
			return 1;
		}
		else{
	  return	tribonacci(a,n,j+1);}
	}
	else if((j+4+p)<n && (a[j]+a[j+1]+a[j+2]-3*48)==(a[j+3+p]-48)*10+a[j+4+p]-48){
	
		if((j+4+p)==(n-1)){
			return 1;
		} 
		else{  p++;
	  return	tribonacci(a,n,j+1);}
	}
	else{
		return 0;
	}
	
}



int main(){
   char a[]={'9','9','8','2','6','1','9','1','6','9','1','6','1','1','1','6','1','6','1','6','1','6','8'};
  cout<<tribonacci(a,23)<<endl;  
	return 0;
}
