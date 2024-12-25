#include<iostream>
#include<string>
using namespace std;

int main(){
int n;
cin>>n;
string a[n],b[n],c[2*n];
for(int i=0;i<n;i++){cin>>a[i];}
for(int i=0;i<n;i++){cin>>b[i];}  int y=0;
for(int i=0;i<n;i++){c[y]=a[i];y++;c[y]=b[i];y++;}y=0;
//for(int i=0;i<2*n;i++){cout<<c[i]<<" ";}
for(int i=0;i<2*n-1;i++)
{
    for(int j=i+1;j<2*n;j++){ 
       if( i%2==0 && j%2==0 && c[i].compare(c[j])==0){
        if(c[i+1].compare(c[j+1])==0){;}
        else{y++;cout<<"false";}
       }
    if( i%2!=0 && j%2!=0 && c[i].compare(c[j])==0){
        if(c[i-1].compare(c[j-1])==0){;}
        else{y++;cout<<"false";}
       }
       if(y==1){break;}
    }
    if(y==1){break;}
}
if(y==0){cout<<"true";}
return 0;
}