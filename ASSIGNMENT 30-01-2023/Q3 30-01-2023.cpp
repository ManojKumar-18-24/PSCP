#include<iostream>
using namespace std;


struct info
{
	int rno;
	int submarks[4];
	int total;
};

info read(info p)
{   p.total=0;
       static int q=1;
	cout<<"roll no.of "<<q<<"th student";
	cin>>p.rno;
	for(int i=0;i<4;i++)
	{   cout<<i+1<<" subject marks of "<<q<<" th student=";
		cin>>p.submarks[i];
		p.total+=p.submarks[i];
	} q++;
	return p;
}

void print(info p)
{   static int k=1; 
	cout<<"roll number of "<<k<<"th student ="<<p.rno<<endl;
	for(int i=0;i<4;i++)
	{
		cout<<i+1<<" sub-marks of "<<k<<"th student ="<<p.submarks[i]<<endl;
	}
	cout<<"total= "<<p.total<<endl;
    cout<<"--------------------";
	k++;
}

int main(){
   
   int n;
   cout<<"no.of students: ";
   cin>>n;
   info a[n];
   for(int i=0;i<n;i++)
   {
   	a[i]=read(a[i]);
   }
   int min=a[0].total;
   for(int i=0;i<n-1;i++)
   {    int min=a[i].total;int w=0;int r;
   	for(int j=i+1;j<n;j++)
	   {
   		  if(a[j].total<min){ min=a[j].total;w++;r=j;}
			 
	   }
	   if(w>0)
	   {
	   	  info t=a[i];
	   	  a[i]=a[r];
	   	  a[r]=t;
	   }
   }
   for(int i=0;i<n;i++)
   {
   	print(a[i]);
   	cout<<endl;
   }
   
return 0;
}

