#include<iostream>
using namespace std;

int reverse(int a,int sum=0){

int g=a%10;
sum=(sum*10)+g;
if(a<10){return sum;}
else{
   reverse(a/10,sum);
}
}

void reversearray(int b[],int h,int l=0){
if(l==h){;}
else{ int m=b[l];
     b[l]=b[h];
     b[h]=m;
     reversearray(b,h-1,l+1);
}

}

int main(){
int b[]={758,45,253,691,56};
reversearray(b,4);
for(int i=0;i<5;i++){
     b[i]=reverse(b[i]);
}
for(int i=0;i<5;i++){
	cout<<b[i]<<" ";
}
return 0;
}
