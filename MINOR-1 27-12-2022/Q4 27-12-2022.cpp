#include<iostream>
using namespace std;

int main(){
int n;
cin>>n;
int a[n][n];
for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
        a[i][j]=0;
    }
}
if(n%2==0){
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i==0||j==0||i==n-1||j==n-1){
                a[i][j]=1;
            } int p=2;
            while(p<n/2){
               if(i==p && j<=n-1-p && j>=p){
                a[i][j]=1;
               }
               p+=2;
            }   p=2;
             while(p<n/2){
               if(i==n-1-p && j<=n-1-p && j>=p){
                a[i][j]=1;
               }
               p+=2;
            }
        }
    }
}
if(n%2!=0){
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i==0||j==0||i==n-1||j==n-1){
                a[i][j]=1;
            } int p=2;
            while(p<=(n-3)/2){
               if(i==p && j<=n-1-p && j>=p){
                a[i][j]=1;
               }
               p+=2;
            }   p=2;
             while(p<=(n-3)/2){
               if(i==n-1-p && j<=n-1-p && j>=p){
                a[i][j]=1;
               }
               p+=2;
            }
            if(i==(n-1)/2){
                if(j%2==0)
                {a[i][j]=1;}
            }
        }
    }
}
for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
        cout<<a[i][j]<<" ";
    }cout<<endl;
}
return 0;
}
  //sir, the below one i coded after the exam as the 
  //above logic is not working for input>7
/*
  #include<iostream>
using namespace std;

int main(){
int n,e;
cin>>n;int a[n][n];
for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
        a[i][j]=0;
    }
} if(n%2==0){e=n/2;}
else{e=(n+1)/2;}
  int p=0;
  while(p<e){
    for(int i=0+p;i<n-p;i++){
        a[i][p]=1;
    }
    for(int j=1+p;j<n-p;j++){
        a[n-1-p][j]=1;
    }
    for(int i=n-2-p;i>=0+p;i--){
        a[i][n-1-p]=1;
    }
    for(int j=n-2-p;j>=1+p;j--){
        a[p][j]=1;
    }
    p+=2;
  }
  for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
        cout<<a[i][j]<<" ";
    }cout<<endl;
}
return 0;
}*/