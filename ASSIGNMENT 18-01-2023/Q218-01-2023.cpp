#include<iostream>
using namespace std;

void frequency(string s,int size){
for(int i=0;i<size;i++){
    int w=0;
    for(int j=0;j<i;j++){
        if(s[i]==s[j]){
            w++;
        }
    } int r=0;
    if(w==0){
        for(int k=i;k<size;k++){
            if(s[i]==s[k]){
          r++;
            }
        }
        cout<<s[i]<<" is repeated "<<r<<" times"<<endl;
    }
}
}

int main(){
string s;
string sum;
while(1){
    cin>>s;
    int u=s.length();
    if(s=="z"){
        break;
    }
    else{sum+=s;}
s.erase(0,u);
}
int y=sum.length();
frequency(sum,y);
return 0;
}