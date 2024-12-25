#include<iostream>
using namespace std;

int main(){
int h;
cout<<"enter a number: ";
cin>>h;
int y=0;
for(int i=1;i<=h;i++){
    for(int j=1;j<=i;j++){
        if(i%j==0){
            y++;
        }
    }
    if(y>2){
        cout<<i<<" ";
    }
    y-=y;
}

return 0;
}
