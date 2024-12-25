#include<iostream>
using namespace std;

int main(){
int n;
cout<<"size= ";
cin>>n;
int b[n];
for(int i=0;i<n;i++){
    cout<<"b["<<i<<"]";
    cin>>b[i];
}
cout<<midx(b,0,0);

return 0;
}