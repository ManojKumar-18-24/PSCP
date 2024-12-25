/*#include<iostream>
using namespace std;

int main(){
 int n,m;
 cout<<"enter max.int: ";
 cin>>m;
  cout<<"enter max. alphabet number: ";
 cin>>n;
 for(int i=1;i<=m;i++){
    for(int j=1;j<=m;j++){
        for(int k=65;k<=65+n;k++){
            for(int l=65;l<=65+n;l++){
                int o=1;
                while(o>i && o>j && o<=m){
                    cout<<i<<j<<char(k)<<char(l)<<o<<" ";
                    o++;
                }
            }
        }
    }
 }
return 0;
}*/

#include<iostream>
using namespace std;

int main(){
 int n,m;
 cout<<"enter max.int: ";
 cin>>m;
  cout<<"enter max. alphabet number: ";
 cin>>n;
 for(int i=1;i<=m;i++){
    for(int j=1;j<=m;j++){
        for(int k=97;k<=97+n-1;k++){
            for(int l=97;l<=97+n-1;l++){
                int o=1;
                while(o<=m){
                   if(o>i && o>j){ cout<<i<<j<<char(k)<<char(l)<<o<<" ";}
                    o++;
                }
            }
        }
    }
 }
return 0;
}