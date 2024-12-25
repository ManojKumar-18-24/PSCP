#include<iostream>
using namespace std;

int main(){
int a[25];
for(int i=0;i<7;i++){
    cout<<"enter the "<<i<<"th element: ";
    cin>>a[i];
}
int n;
cout<<"enter the inserting element: ";
cin>>n;
for(int i=0;i<7;i++){
    if(n<a[i]){
        for(int j=6;j>=i;j--){
            a[j+1]=a[j];
        }
        a[i]=n;
        break;
    }
}
for(int i=0;i<8;i++){
    cout<<a[i]<<" ";
}
return 0;
}