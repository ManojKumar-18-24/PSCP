#include<iostream>
using namespace std;

int main(){
int n;
cout<<"ENTER A NUMBER: ";
cin>>n;
for(int i=1;i<=2;i++){
    for(int j=1;j<=(2*n-1);j++){
        cout<<".";
    }
    if(i==1){cout<<"<|>";}
    if(i==2){cout<<"<|>";}
     for(int j=1;j<=(2*n-1);j++){
        cout<<".";
    }
    cout<<endl;
}
for(int i=1;i<=(2*n);i++){
    for(int j=1;j<=(2*n)-i;j++){
        cout<<".";
    }
    cout<<"*";
    for(int j=1;j<=(i-1);j++){
        cout<<"-";
    }
    cout<<"*";
     for(int j=1;j<=(i-1);j++){
        cout<<"-";
    }
    cout<<"*";
     for(int j=1;j<=(2*n)-i;j++){
        cout<<".";
    }
    cout<<endl;
}
for(int i=1;i<=(4*n+1);i++){
    cout<<"*";
} cout<<endl;
for(int i=1;i<=(4*n+1);i++){
    if(i%2!=0){cout<<"*";}
else{cout<<".";}
}cout<<endl;
for(int i=1;i<=(4*n+1);i++){
    cout<<"*";
}
return 0;
}