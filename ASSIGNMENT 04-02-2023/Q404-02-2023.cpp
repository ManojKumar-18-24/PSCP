#include<iostream>
using namespace std;

void readarray(int *p,int n)
{    static int i=0;
     if(i==n){;}
     else{cin>>*(p+i);i++;readarray(p,n);}
}

void sortarray(int *p,int n)
{   
   static int i=0,j=1,t=0,min,r;
    if(i==n){;}
    else if(j==n){
          if(t>0){int t=min;*(p+r)=*(p+i);*(p+i)=min;}
          t=0;i++;j=i+1;sortarray(p,n);
    }
    else if(j<n){
        if(*(p+j)<*(p+i)){
            min=*(p+j);t++;r=j;}
            j++;
            sortarray(p,n);
    }
}

void printarray(int *p,int n)
{
     static int i=0;
     if(i==n){;}
     else{cout<<*(p+i)<<" ";i++;printarray(p,n);}
}


int main(){
int n;
cout<<"size=";
cin>>n;
int a[n];
readarray(a,n);
for(int i=0;i<n;i++){cout<<a[i]<<" ";}cout<<endl;
sortarray(a,n);
for(int i=0;i<n;i++){cout<<a[i]<<" ";}cout<<endl;
printarray(a,n);
return 0;
}