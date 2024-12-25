#include<iostream>
using namespace std;

int main(){
int m,n,e;
cin>>m>>n;
int a[m][n];
for(int i=0;i<m;i++){
    for(int j=0;j<n;j++){
        cin>>a[i][j];
    }
}
for(int j=0;j<n;j++){
    e=0;
    for(int k=j+1;k<n;k++){
        int t=0;
        for(int i=0;i<m;i++){
         if(a[i][j]==a[m-1-i][k]){
           t++;
          }
        }
        if(t==m){
            for(int i=0;i<m;i++){
                cout<<a[i][j]<<" "<<a[i][k]<<endl;
            }
            e++;
            cout<<"---"<<endl;
        }

        
    }
}
if(e==0){cout<<"NO SUCH COLUMNS"<<endl;}
else{cout<<"COLUMN EXISTS"<<endl;}
for(int i=0;i<m;i++){
    for(int j=0;j<n;j++){
        cout<<a[i][j]<<" ";
    }
   cout<<endl;
}
return 0;
}