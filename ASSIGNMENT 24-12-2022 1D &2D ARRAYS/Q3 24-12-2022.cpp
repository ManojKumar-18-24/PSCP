#include<iostream>
using namespace std;

int main(){
    int m,sum;
    cin>>m;
    int a[m];
for(int i=0;i<m;i++){
    cin>>a[i];
}
int r;
for(int i=0;i<m;i++){
    int f=0;
    for(int j=0;j<i;j++){
        if(a[i]==a[j]){
            f++;
        }
    }
    if(f==0){
        r=0;
        for(int j=i+1;j<m;j++){
            if(a[i]==a[j]){
             r++;
            }
        }
        sum+=r;
        cout<<r+1<<" "<<a[i]<<" are/is there"<<endl;
    }
}
cout<<"NO.OF DUPLICATE ELEMENTS: "<<sum;
return 0;
}