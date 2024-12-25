#include<iostream>
using namespace std;

int main(){
   int y=65;
for(int i=1;i<=6;i++)
{
    if(i<=5){for(int j=1;j<=5-i;j++){cout<<j;}
    cout<<"|";
    for(int j=1;j<=2*i-1;j++){cout<<(char)y;y++;}
    cout<<"|";
    for(int j=5-i;j>=1;j--){cout<<j;}cout<<endl;}
    else{
        for(int i=1;i<5;i++){cout<<" ";}cout<<"|Z|";
        for(int i=1;i<4;i++){cout<<" ";}cout<<endl;
    }
}
      
for(int i=1;i<=5;i++)
{
    for(int j=4;j>=i;j--){cout<<j;}
    cout<<"|";
    for(int j=1;j<=2*i-1;j++){cout<<(char)y;y--;}
    cout<<"|";
    for(int j=i;j<=4;j++){cout<<j;}cout<<endl;
}   
    for(int i=1;i<5;i++){cout<<" ";}cout<<"|A|";
    for(int i=1;i<4;i++){cout<<" ";}cout<<endl;
return 0;
}