#include<iostream>
using namespace std;

int main(){
for(int i=12;i<=16;i++){
    cout<<i-11<<". Table of ";
    switch(i){
        case 12:cout<<"Twelve";
        break;
         case 13:cout<<"Thirteen";
        break;
         case 14:cout<<"Fourteen";
        break;
         case 15:cout<<"Fifteen";
        break;
         case 16:cout<<"Sixteen";
        break;
        default: ;
        break;} cout<<endl;
cout<<"-----------------"<<endl;
for(int j=1;j<=10;j++){
    cout<<j<<"."<<i<<"*"<<j<<"="<<i*j<<endl;
    }
    cout<<"-----------------------"<<endl;    
}
return 0;
}