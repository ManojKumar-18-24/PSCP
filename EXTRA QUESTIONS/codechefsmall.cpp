#include <iostream>
using namespace std;

int main() {
	int n,k,s;cin>>n>>k>>s;
	int a[n+k-1];int p=0,i;
	for( i=1;p<=n-1;i+=2){a[p]=i;p++;} i=0;
	while(i<p)
	{
	    for(int j=p;j<n+k-1;j++){a[j]=a[i];}
	    int sum=0;
	    for(int j=0;j<n+k-1;j++){sum+=a[j];}
	    if(sum==s){ cout<<a[i];break;}
	    i++;

	}
	return 0;
}