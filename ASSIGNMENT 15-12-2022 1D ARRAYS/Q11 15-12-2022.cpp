#include<iostream>
using namespace std;

int main(){
int m,max,p;
cin>>m;
int a[m],b[(m*m-m)/2];
for(int i=0;i<m;i++){
    cin>>a[i];
}
for(int i=0;i<m;i++){
    int f=0;if(i==0){max=f;}
    int s=0,p=0;
    for(int j=0;j<m;j++){
        if(a[i]-a[j]==1 || a[i]-a[j]==-1){
          f++;
          if(p==0){b[0]=a[i];p++;}
          b[p]=a[j];
          p++;
        }
    }
    if(f>=max){max=f;cout<<a[i];}
}
for(int i=0;i<p;i++){
   cout<<b[i];
}
cout<<"maximum count of consecutive numbers is "<<max+1;
return 0;
}