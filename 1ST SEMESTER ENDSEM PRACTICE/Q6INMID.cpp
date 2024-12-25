#include<iostream>
using namespace std;

int main()
{
 int n;char uc,sc,lc;
 cin>>n>>uc>>sc>>lc;
 for(int i=1;i<=n+1;i++)
 {
    for(int j=1;j<=2*n-1;j++)
    {
        if(i==1){cout<<uc<<" ";}
        else if(i==n+1){cout<<n<<" ";}
        else if(i-j==n-2 || i+j==n-2){cout<<sc<<" ";}
        else if(i-j<n-2 && i+j>n-2){cout<<lc<<" ";}
        else{cout<<uc<<" ";}
    }cout<<endl;
 }
return 0;
}