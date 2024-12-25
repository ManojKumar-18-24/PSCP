#include<iostream>
using namespace std;

struct two
{
    int p;
    int q;
};

void function(two a[],int n)
{   static int i=0,j=n-1;
    if(i==n-1){;}
    else if(j<=i){i++;j=n-1;function(a,n);}
    else if(a[i].p==a[j].q && a[i].q==a[j].p)
    {
        cout<<"{"<<a[i].p<<","<<a[i].q<<"}";
        cout<<"{"<<a[j].p<<","<<a[j].q<<"}";cout<<endl;
        j--;function(a,n); 
    }
    else{j--;function(a,n);}
}

int main(){
int n;cout<<"how many? ";cin>>n;
two a[n];
for(int i=0;i<n;i++){cin>>a[i].p;cin>>a[i].q;}
function(a,n);
return 0;
} 