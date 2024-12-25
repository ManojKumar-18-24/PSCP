#include<iostream>
using namespace std;


void equalrows(int a[][4],int t,int r,int i=0,int j=0,int q=0){
if(i==r){
    ;
}
else if(i==t){
  t=r;
equalrows(a,t,r,i+1,0,0);
    }

else if(j==4){
    if(q==4){
        cout<<"rows "<<i<<" and "<<t<<" are equal "<<endl;
    }
    equalrows(a,t-1,r,i,0,0);
}
else if(a[i][j]==a[t][j]){
equalrows(a,t,r,i,j+1,q+1);
}
else{
    equalrows(a,t-1,r,i,0,0);
}
}


int main(){
    int n;
    cout<<"enter rows: ";
    cin>>n;
    int b[n][4];
for(int i=0;i<n;i++){
    for(int j=0;j<4;j++){
        cout<<"b["<<i<<"]["<<j<<"] = ";
        cin>>b[i][j];
    }
}
equalrows(b,n-1,n-1);
return 0;
}