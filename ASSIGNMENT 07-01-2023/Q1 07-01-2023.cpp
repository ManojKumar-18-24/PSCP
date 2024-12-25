#include<iostream>
#include<string>
using namespace std;


void lowerupper(char a[],int n){
for(int i=0;i<n;i++){
   char y;
   y=a[i];
   cout<<char(y-32);

}
}

void upperlower(char a[],int n){
for(int i=0;i<n;i++){
   char y;
   y=a[i];
   cout<<char(y+32);

}
}

int main(){

int n;
cin>>n;
char a[n];
for(int i=0;i<n;i++){
    cin>>a[i];
}
int p;
cout<<"CHOOSE\n1.lower to upper \n2.upper to lower\n";
cin>>p;
if(p==1){
    lowerupper(a,n);
}
else if(p==2){
      upperlower(a,n);
}
else{
    cout<<"enter 1 or 2";
}
return 0;
}