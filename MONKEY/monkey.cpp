#include<iostream>
using namespace std;

int main(){
float x,y,z;
cout<<"enter pole height(in m): ";
cin>>z;
cout<<"enter speed(m/min): ";
cin>>x;
cout<<"enter slipping lenght(in m): ";
cin>>y;
int g=(z/(x-y)) - 1;
float d=(x-y)*g;
float t1=2*d/(x-y);
int k=z-d;
float t2 =k/x;
cout<<"total time is: "<<t1+t2<<endl;


 
return 0;
}