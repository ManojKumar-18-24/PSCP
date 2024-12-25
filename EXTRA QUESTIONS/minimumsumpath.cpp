#include<iostream>
using namespace std;

void minsumpath(int a[][5],int n,int sum=0,int y=0,int i=0,int j=0){
	static int b[100],c[100],t=0,min,path=0;
    if(i==n-1 && j==4){b[y]=a[i][j];minsumpath(a,n,sum+a[i][j],y+1,i+1,j);}
    if(i>n-1)
    {  path++;
     if(t==0)
       {
        min=sum;
       for(int f=0;f<9;f++){c[f]=b[f];} t++;

       
        }
        else
        {  if(sum<min){
            min=sum; for(int f=0;f<9;f++){c[f]=b[f];} 
             }
             } 
              if(path==70){for(int f=0;f<9;f++){cout<<c[f]<<" ";}}
     }   
      
    else
    {
       if(j+1<5){b[y]=a[i][j];minsumpath(a,n,sum+a[i][j],y+1,i,j+1);}
       if(i+1<n){b[y]=a[i][j];minsumpath(a,n,sum+a[i][j],y+1,i+1,j);}
    }

}

int main(){
int a[5][5]={-131,673,234,103,18,-201,96,342,965,150,-630,803,746,422,111,-537,699,497,121,956,-805,-732,-524,-37,-331};
/*for(int i=0;i<5;i++){
    for(int j=0;j<5;j++){
        cout<<"a["<<i<<"]["<<j<<"] = ";
        cin>>a[i][j];
    }
}*/
minsumpath(a,5);
//for(int i=0;i<9;i++){cout<<y[i]<<" ";}
return 0;
}