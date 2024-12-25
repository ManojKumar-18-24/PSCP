#include<iostream>
using namespace std;

int main(){
int n;
cin>>n;	int i=1;
char a[100];int k=0;
char b[]={'I','V','X','L','C','D','M','M','M'};
while(n>0){
int g=n%10;
if(g==0){
	;
}
else if(g<=3 && g>0){
 for(int j=0;j<g;j++){
 	a[k]=b[i-1];k++;
 }	
}	
else if(g==4){
	a[k]=b[i];k++;
	a[k]=b[i-1];k++;
}	
else if(g>=5 && g<9){ 	
	for(int j=0;j<g-5;j++){
		a[k]=b[i-1];k++;
	} a[k]=b[i];k++;
}
else{
	a[k]=b[i+1];k++;
	a[k]=b[i-1];k++;	
}
n/=10;	
i+=2;	
}	
for(int j=k-1;j>=0;j--){
	cout<<a[j];
}
	return 0;
}
