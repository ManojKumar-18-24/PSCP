#include<iostream>
using namespace std;

double power(double n,int p =2){
    double r=1;
    for(int i=1;i<=p;i++){
        r*=n;
    }
    return r;
}
int main(){
double n;int p;
cin>>n;
cin>>p;
cout<<power(n,p);
return 0;
}