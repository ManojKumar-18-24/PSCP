#include<iostream>
using namespace std;

struct poly
{
	int coeff;
	int expo;
};

int  readpoly(poly p[])
{
	for(int i=0;i<10;i++)
	{
		cin>>p[i].coeff;
		p[i].expo=i;
	}   int r=0;
	for(int i=0;i<10;i++)
	{
	    if(p[i].coeff !=0){ r++;}	
	}
	return r;	
}

int main(){
   poly p1[10],p2[10],p3[10];
   cout<<"terms of p1="<<readpoly(p1);
   	for(int i=0;i<10;i++)
	{
		cout<<p1[i].coeff<<" ";
		cout<<p1[i].expo<<endl;
	} 
   cout<<"terms of p2="<<readpoly(p2);
   cout<<"terms of p2="<<readpoly(p3);
   
return 0;
}

