#include<iostream>
using namespace std;


struct data
{
    int rno;
	char at;
	string name;
	int regno[3];	
};

data function(data r)
{
	cin>>r.rno;
    cin>>r.at;
    cin>>r.name;
    for(int i=0;i<3;i++)
	{
    cin>>r.regno[i];
	}
	return r;
}

void print(data p)
{
	 cout<<p.rno<<endl;
    cout<<p.at<<endl;
    cout<<p.name<<endl;
    for(int i=0;i<3;i++)
	{
    cout<<p.regno[i]<<" ";
	}	
}


int main()
{
    data e;
	data p=function(e);
    /*cin>>e.rno;
    cin>>e.at;
    cin>>e.name;
    for(int i=0;i<3;i++)
	{
    cin>>e.regno[i];
	}*/
	 cout<<p.rno<<endl;
    cout<<p.at<<endl;
    cout<<p.name<<endl;
    for(int i=0;i<3;i++)
	{
    cout<<p.regno[i]<<" ";
	} cout<<endl;
	print(p);
return 0;
}

