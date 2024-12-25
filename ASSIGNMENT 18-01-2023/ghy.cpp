#include<iostream>
#include<string>
using namespace std;

/*void check(char s[][6],int n,string s1,int u,int i=0,int j=0){
static int p=0,t=1,a,b,c=0;int r=0;
if(i>n-1 ){
	cout<<"No";
}
else if(t==u){
	c++;
	cout<<"yes";	
}
else if(p==1){
	if(j+1<6){
		if(s1[t]==s[i][j+1]){
		r++;t++;check(s,n,s1,u,i,j+1);	
		}
	}
	if(i+1<n){
		if(s1[t]==s[i+1][j]){
		r++;t++;check(s,n,s1,u,i+1,j);	
		}
	}
	if(i-1>=0){
		if(s1[t]==s[i-1][j]){
		r++;t++;check(s,n,s1,u,i-1,j);	
		}
	}
	if(j-1>=0){
		if(s1[t]==s[i][j-1]){
		r++;t++;check(s,n,s1,u,i,j-1);	
		}
	}
	if(r==0 && c==0){
		if(b<5){p=0;t=1;check(s,n,s1,u,a,b+1);}
		else{p=0;t=1;check(s,n,s1,u,a+1,0);}
	}
}
else if(p==0){
	if(s1[0]==s[i][j]){
		p++; a=i;b=j;
		check(s,n,s1,u,i,j);
	}
	else{
		if(i==n-1 && j==5){
			if(c==0){
				cout<<"No";
			}
		}
		else if(j<5){
			check(s,n,s1,u,i,j+1);
		}
		else{
			check(s,n,s1,u,i+1,0);
		}
	}
}
}

int main(){
int r;
cin>>r;
char a[6][6]={'P','P','P','N','C','S','P','P','T','I','W','E','P','T','W','N','I','P','P','P','W','W','C','P','P','P','P','P','I','P','P','P','P','P','P','N'};
for(int i=0;i<r;i++){
	for(int j=0;j<6;j++){
		cin>>a[i][j];
	}
}
string str;
getline(cin,str);
int u=str.length();
check(a,6,str,u);
return 0;
}*/

void check(int &x,int &y){
	int t;
	t=x+y;
	x=y+t;
	y=t;

}
int main(){
	int a=4,b=5;
	check(a,b);
	cout<<a<<b;

}