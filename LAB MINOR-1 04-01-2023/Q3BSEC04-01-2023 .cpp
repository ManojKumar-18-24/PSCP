#include<iostream>
using namespace std;


int givensumpath(int a[][5],int n,int key,int i=0,int j=0,int sum=0,int l=0){
	static int b[100];int r=0;static int p=0;
if(i==n-1 && j==4){
	b[l]=a[i][j];
	sum+=a[n-1][j];
}
if(j<4){ r++;
    b[l]=a[i][j];
    sum+=a[i][j];
   givensumpath(a,n,key,i,j+1,sum,l+1);
}
if(i<n-1){b[l]=a[i][j];
 if(r==0){sum+=a[i][j];}
 givensumpath(a,n,key,i+1,j,sum,l+1);
}
if(sum==key && i==n-1 && j==4){
    p++;
for(int k=0;k<=l;k++){
	cout<<b[k]<<" ";
}cout<<endl;
}
return p;
}

int main(){
int r;
cin>>r;
int a[5][5];
for(int i=0;i<r;i++){
    for(int j=0;j<5;j++){
        cout<<"a["<<i<<"]["<<j<<"] = ";
        cin>>a[i][j];
    }
}
int key;
cout<<"sum =";
cin>>key;
int y=givensumpath(a,r,key);
cout<<"no.of paths="<<y;
return 0;
}