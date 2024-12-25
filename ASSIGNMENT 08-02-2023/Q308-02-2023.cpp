#include<iostream>
using namespace std;

struct interval
{
    int p;
    int q;
};

int main(){
int n;
cout<<"how many";
cin>>n;
interval a[n];int v[n];int c[2];
for(int i=0;i<n;i++){cin>>a[i].p;cin>>a[i].q;}
for(int i=0;i<n;i++){v[i]=0;}
for(int i=0;i<n;i++)
{
    if(v[i]==0)
    {
        c[0]=a[i].p;c[1]=a[i].q;
        for(int j=i+1;j<n;j++)
        {
             if(a[j].p<=c[1])
             {
                if(a[j].q>a[i].q){c[1]=a[j].q;}
                else c[1]=a[i].q;
                if(a[j].p<a[i].p){c[0]=a[j].p;}
                else c[0]=a[i].p;
                v[j]=1;
             }
        }
         cout<<"{"<<c[0]<<","<<c[1]<<"} ";
    }

    
}
return 0;
}