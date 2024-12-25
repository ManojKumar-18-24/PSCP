#include<iostream>
using namespace std;

int* sortandinsert(int c[3][3],int size,int key){
static int e[4][3],i=0;
for(int j=0;j<3;j++){  e[i][j]=c[i][j];	}
	int w,r;
   for(int j=0;j<2;j++){
        int min=e[i][j],w=0;
		  for(int q=j+1;q<3;q++){
			if(e[i][q]<min){
				min=e[i][q];r=q;w++;
			}
		  }
		  if(w>0){
			int t=e[i][j];
			e[i][j]=e[i][r];
			e[i][r]=t;
		  }
   }
    int a=0;
    for(int j=0;j<3;j++){
		if(key>e[i][j]){
			a=j+1;
		}
	}
	for(int w=4;w>=a;w--){
		e[i][w]=e[i][w-1];
	}
    e[i][a]=key;
	for(int j=0;j<4;j++){
		cout<<e[i][j]<<" ";
	}
    cout<<endl;
    	i++;
}

int main(){	
	int c[3][3];
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			cout<<"c["<<i<<"]["<<j<<"] =";
			cin>>c[i][j];
		}
}
	for(int i=0;i<3;i++){
	sortandinsert(c,3,5);}
	return 0;
}
