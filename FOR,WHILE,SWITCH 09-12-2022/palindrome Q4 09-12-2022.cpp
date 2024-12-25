#include<iostream>
using namespace std;

int main(){
 int h;
 cin>>h;
 int y=h;
 int rn =0;
 while(h>0){
    int g=h%10;
    rn = g+ rn*10;
    h/=10;
 }
 if(y==rn){
    cout<<"it is a palindrome";
 }
 else{
    cout<<"it is not a palindrome";
 }
return 0;
}