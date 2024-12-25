#include<iostream>
using namespace std;

int main(){
int i=0,j=0,m,c[12];
 while(true){
   int m;
   cin>>m;
   c[i]=m;
   i++;
   if(m==-1){
    break;
   }
 }
    while(c[j]!=-1){
      int f=0;
      cout<<"{ ";
    while(true){
        cout<<c[j]<<" ";
        f++;
        if(j==0){
             m=f;
        }
        if(c[j+1]<c[j]){
          cout<<"}";
            j++;
            cout<<endl;
          if(f>=m){
             m=f;
          }
            break;
        }
       j++;
    }
    }
    cout<<"maximum sub sequence lenght is "<<m;
return 0;
}