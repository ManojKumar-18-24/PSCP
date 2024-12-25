#include<iostream>
using namespace std;

void longestsequence(int a[5][5],int i,int j){
int q=0;
static int r=0,w=0;
if( j<4 && i<5 && a[i][j+1]-a[i][j]==1){
    w++;q++;
if(r==0){cout<<a[i][j]<<" ";r++;}
 cout<<a[i][j+1]<<" ";
 longestsequence(a,i,j+1);
}
if(i<4 && j<5 && a[i+1][j]-a[i][j]==1){
    w++;q++;
   if(r==0){cout<<a[i][j]<<" ";r++;} 
    cout<<a[i+1][j]<<" ";
 longestsequence(a,i+1,j);
}
if(i<5 && j>0 && a[i][j-1]-a[i][j]==1){
    w++;q++;
   if(r==0){cout<<a[i][j]<<" ";r++;} 
    cout<<a[i][j-1]<<" ";
 longestsequence(a,i,j-1);
}
if(i>0 && j<5 && a[i-1][j]-a[i][j]==1){
    w++;q++;
   if(r==0){cout<<a[i][j]<<" ";r++;} 
    cout<<a[i-1][j]<<" ";
 longestsequence(a,i-1,j);
}
if(w==0){cout<<"no such sequence";}
if(q==0){;}
}

int main(){
int r;
cout<<"enter the rows of  matrix: ";
cin>>r;

int a[r][5];
for(int i=0;i<r;i++){
    for(int j=0;j<5;j++){
        cout<<"a["<<i<<"]["<<j<<"] =";
         cin>>a[i][j];
    }
}
int i,j;
cout<<"i = ";
cin>>i;
cout<<"j = ";
cin>>j;
longestsequence(a,i,j);
return 0;
}