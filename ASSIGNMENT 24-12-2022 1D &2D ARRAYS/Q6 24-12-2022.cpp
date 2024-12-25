#include<iostream>
using namespace std;

int main(){
int m,z;
cin>>m;
int a[m][m];
for(int i=0;i<m;i++){
    for(int j=0;j<m;j++){
        cin>>a[i][j];
    }
} z=0;
for(int i=0;i<m;i++){  
    for(int j=0;j<m;j++){
    int l=0;
    int t=0;
        while(true){
         if(a[i][l]==a[m-1-l][j]){
           t++;
         }
         l++;
         if(l==m){break;}
        }
        if(t==m){
               z++;
            int l=0;
        while(l<m){
         cout<<a[i][l]<<" "<<a[l][j]<<endl;  
         l++;
        }    
        }
    }
}
if(z==0){cout<<"NO SUCH PAIR"<<endl;}
else{cout<<"THERE IS A PAIR"<<endl;}
for(int i=0;i<m;i++){
    for(int j=0;j<m;j++){
        cout<<a[i][j]<<" ";
    }cout<<endl;
}
return 0;
}