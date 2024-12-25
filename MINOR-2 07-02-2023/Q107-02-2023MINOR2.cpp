#include<iostream>
#include<string>
#include<cstring>
using namespace std;

struct regf
{
    int rno;
    string sub;
};
struct stuf
{
    int rlno;
    int subregcount;
    string subjs[10];
};

struct subf
{
    string subname;
    int studregcount;
    int stdrno[20];
};

int main(){
int n;cout<<"no.of ";cin>>n;
regf r[n];
for(int i=0;i<n;i++){cin>>r[i].rno;cin>>r[i].sub;}
stuf a[100];int c=0;
for(int i=0;i<n;i++)
{
    int w=0;
    for(int j=0;j<i;j++)
    {
        if(r[i].rno==r[j].rno){w++;}
    }
    if(w==0){a[c].rlno=r[i].rno;c++;}
}

subf b[100];int d=0;
for(int i=0;i<n;i++)
{
   int w=0;
   for(int j=0;j<i;j++)
   {
    if(((r[i].sub).compare(r[j].sub))==0){w++;}
   }
   if(w==0){b[d].subname=r[i].sub;d++;}
}

for(int i=0;i<c;i++)
{
    int p=a[i].rlno;int w=0;
    for(int j=0;j<n;j++)
    {
        if(r[j].rno==p)
        {
            a[i].subregcount++;
            a[i].subjs[w]=r[j].sub;w++;
        }
    }
}


for(int i=0;i<d;i++)
{
    string e=b[i].subname;int w=0;b[i].studregcount=0;
    for(int j=0;j<n;j++)
    {
        if((e.compare(r[j].sub))==0)
    
        {
            b[i].studregcount++;
            b[i].stdrno[w]=r[j].rno;w++;
        }
    }
} cout<<"STUDENT DETAILS:\n";
for(int i=0;i<c;i++)
{
    cout<<a[i].rlno<<" ";
    for(int j=0;j<a[i].subregcount;j++)
    {
        cout<<a[i].subjs[j]<<" ";
    }
    cout<<endl;
} cout<<"SUBJECT DETAILS:\n";
for(int i=0;i<d;i++)
{
    cout<<b[i].subname<<" ";
    for(int j=0;j<b[i].studregcount;j++)
    {
        cout<<b[i].stdrno[j]<<" ";
    }  cout<<endl;
}
return 0;
}