#include<iostream>
using namespace std;

int main(){
int r=1;int a[1000];int g=0;
int i=0;
int n;cin>>n;
while(true)
{  
    int k=r;
    while(k>0)
    {  i++;a[g]=k%10;g++;
       if(i==n){for(int e=0;e<g;e++){cout<<a[i]<<" ";}cout<<k;;break;}
       k/=10;
    }
    if(i==n){break;}
    r++;
}

return 0;
}