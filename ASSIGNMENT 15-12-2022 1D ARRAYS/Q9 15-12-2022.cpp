#include<iostream>
using namespace std;

int main(){
int a,b,c;
cin>>a>>b>>c;
int d[a],e[b],f[c];
for(int i=0;i<a;i++){
    cin>>d[i];
}
for(int i=0;i<b;i++){
    cin>>e[i];
}
for(int i=0;i<c;i++){
    cin>>f[i];
}
for(int i=0;i<a;i++){
    for(int j=0;j<b;j++){
    for(int k=0;k<c;k++){
    if(d[i]==e[j]&&e[j]==f[k]){
        cout<<d[i]<<",";
    }
}
}
}
return 0;
}