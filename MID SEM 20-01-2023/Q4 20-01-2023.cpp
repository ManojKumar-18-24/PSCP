#include<iostream>
using namespace std;

int sum(int S[3][4],int i=0,int j=0){
static int s=0;
	if(i==3){
		return s;
	}
	else if(j==4){
		sum(S,i+1,0);
	}
	else{
		s+=S[i][j];
		sum(S,i,j+1);
	}
}

int main(){
int b[12],a[12];
for(int i=0;i<12;i++){
	cin>>b[i];
}int k=0;
for(int i=0;i<12;i++){
	if(b[i]<10){
		a[k]=b[i];k++;
	}
}
for(int i=0;i<12;i++){
	if(b[i]>=10 && b[i]<100){
		a[k]=b[i];k++;
	}
}
for(int i=0;i<12;i++){
	if(b[i]>=100){
		a[k]=b[i];k++;
	}
}
int M[3][4],S[3][4];k=0;
for(int i=0;i<3;i++){
	for(int j=0;j<4;j++){
		M[i][j]=a[k];
		S[i][j]=a[k];k++;	
	}
}
for(int i=1;i<3;i++){
	for(int j=0;j<4;j++){
	int sum=0,t=S[i][j];
	while(t>0){
		sum=(sum*10)+t%10;
		t/=10;
	}
	while(sum>0){
		for(int k=0;k<4;k++){
			if(S[0][k]==sum%10){
				S[i][j]=S[0][k];
				sum=0;
			}
		}
		sum/=10;
	}
	}
}

for(int i=0;i<3;i++){
	for(int j=0;j<4;j++){
	cout<<M[i][j]<<" ";	
	}cout<<endl;
}
for(int i=0;i<3;i++){
	for(int j=0;j<4;j++){
	cout<<S[i][j]<<" ";	
	}cout<<endl;
}
cout<<"sum is "<<sum(S);
return 0;
}

