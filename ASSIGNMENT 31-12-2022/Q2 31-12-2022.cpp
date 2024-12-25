#include<iostream>
using namespace std;


char fibonacci(int n,int k)
{
	static string y[1000];static int p=n;
	if(n==0)
	{
		y[0]="a";
	     y[1]="bc";
	}
	else
	{
		fibonacci(n-1,k);
		y[n+1]=y[n-1]+y[n];cout<<n+1<<" ";
		for(int j=0;j<y[n+1].length();j++)
		{  
			cout<<y[n+1][j];
		}
		cout<<endl;
	}
	
	return y[p][k-1];
}

int main()
{
  int n;
  cout<<"n=";
  cin>>n;
  int k;
  cout<<"k=";
  cin>>k;
  char c=fibonacci(n,k);
  cout<<c;
return 0;
}

