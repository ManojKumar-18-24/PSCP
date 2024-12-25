/*1. Code to Convert a given roman number
 to an integer number.  Read the roman 
 number as a string of characters. 
For details look into the mid exam 
question 2 . */

#include<iostream>
using namespace std;

int main(){
string s;
getline(cin,s);
int u=s.length();
char a[]={'M','D','C','L','X','V','I'};
int  b[]={1000,500,100,50,10,5,1};
int sum=0,i=0;
while(i<u){
	int r=0;
	for(int j=0;j<7;j++){
		if(s[i]==a[j]){ 
			if(s[i+1]==a[j-1]){
				sum+=(b[j-1]-b[j]);
			}
			else if(s[i+1]==a[j-2]){
				sum+=(b[j-2]-b[j]);
			}
			else{
				sum+=b[j];
			   r++;
			}
		}
	}
	if(r==0){i+=2;
	}
	else{
		i+=1;
	}
}
cout<<sum;
return 0;
}

