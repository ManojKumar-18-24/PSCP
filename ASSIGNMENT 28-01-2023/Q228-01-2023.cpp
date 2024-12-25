#include<iostream>
using namespace std;

struct h
{
	int rno;
	int sub1marks;
	int sub2marks;
    int sub3marks;
    int sub4marks;
    float avg;
};
  
h *read(h r[],int n)
{   int i=0;
    for(int i=0;i<n;i++)
	{
	cin>>r[i].rno;
	cin>>r[i].sub1marks;
	cin>>r[i].sub2marks;
    cin>>r[i].sub3marks;
    cin>>r[i].sub4marks;
	}
    return r;
}

void print(h r[],int n)
{    for(int i=0;i<n;i++)
    {
	r[i].avg=(r[i].sub1marks+r[i].sub2marks+r[i].sub3marks+r[i].sub4marks)/4;
	cout<<i+1<<"th students:\n"<<r[i].rno<<endl;
	cout<<r[i].sub1marks<<endl;
	cout<<r[i].sub2marks<<endl;
    cout<<r[i].sub3marks<<endl;
    cout<<r[i].sub4marks<<endl;
    cout<<r[i].avg<<endl;
    } 
}

int main()
{  int n;
   cin>>n; 
   h d[n];   
   h *e=read(d,n);
   print(e,n);
return 0;
}