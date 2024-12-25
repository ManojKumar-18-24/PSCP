#include<iostream>
#include<string>
using namespace std;

void check(string a[],int v[],int n,int i=0,int j=1){
static int p=0;
	
if(i==n){
	cout<<"they can't be chained";
}	
else if(p==n-1){
	cout<<"they can be chained";
}		
else if(j==n){  p=0;
for(int i=0;i<n;i++){
	v[i]=0;
}
check(a,v,n,i+1,0);
}
else if(a[i][a[i].length()-1]==a[j][0] && v[j]==0){
		v[i]=1;v[j]=1;p++;cout<<i<<" "<<j<<endl;
		check(a,v,n,j,0);
}
else{
	check(a,v,n,i,j+1);
}		
}

int main(){
	int n;
	cout<<"no.of words u want to enter: ";
	cin>>n;
string a[n];int v[n];
for(int i=0;i<n;i++){
	cin>>a[i];
}
for(int i=0;i<n;i++){
	v[i]=0;
}
check(a,v,n);
return 0;
}

