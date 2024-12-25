#include<iostream>
using namespace std;

struct arraytostruc
{
   int n;
   int f;
};

void readarray(int a[],int n)
{    static int i=0;
    if(i==n){;}
    else{cin>>a[i];i++;readarray(a,n);}
}

void rearrange(int a[],int n)
{   
  for(int i=0;i<n-1;i++)
  {  
    for(int j=i+1;j<n;j++)
    {    
        if(a[i]==a[j])
        {    int y=a[j];
            for(int k=j;k>i;k--)
            {
                a[k]=a[k-1];
            }
            a[i+1]=y;   
        }
    }
  }
}

void structure(int a[],arraytostruc b[],int n)
{   int v[n];for(int i=0;i<n;i++){v[i]=0;} int w=0;
   for(int i=0;i<n;i++)
   {   int c=1;
    for(int j=i+1;j<n;j++)
    {
        if(a[i]==a[j] && v[j]==0){ c++;v[j]=1;}
    }
      if(v[i]==0){b[w].n=a[i];b[w].f=c;w++;}
   }

   for(int i=0;i<w;i++)
   {
    cout<<b[i].n<<" "<<b[i].f<<"\n";
   }
}

 void printarray(int a[],int n)
{    static int i=0;
    if(i==n){cout<<endl;}
    else{cout<<a[i]<<" ";i++;printarray(a,n);}
}


int main(){
int n;cout<<"size= ";cin>>n;
int a[n]; arraytostruc b[100];
readarray(a,n);
rearrange(a,n);
printarray(a,n);
structure(a,b,n);
return 0;
}