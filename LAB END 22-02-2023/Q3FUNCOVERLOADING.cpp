#include<iostream>
#include<string>
#include<cstring>
using namespace std;

struct std1
{
int rno;
string name;
};

struct std2
{
 int rno;
 char section;
 int atd;
};

class stud
{
 private:
 int rno;
 string name;
 char section;
 int atd;
 public:
 void get()
 {
    cout<<"enter rno name section atd";
    cin>>rno>>name>>section>>atd;
 }
 void print()
 {
    cout<<"rno name section atd =";
    cout<<rno<<" "<<name<<" "<<section<<" "<<atd<<endl;
 }
 void function(std1 &p)
 {  //cout<<"std1 called";
    p.rno=rno;
    p.name=name;
 }
 void function(std2 &p)
 {  //cout<<"std2 called ";
    p.rno=rno;
    p.section=section;
    p.atd=atd;
 }
};

int main()
{
  int n;
  cin>>n;
   stud a[n];std1 b[n];std2 c[n];
   for(int i=0;i<n;i++)
   {
     a[i].get();
     a[i].function(b[i]);
     a[i].function(c[i]);
   }
      for(int i=0;i<n;i++)
   {
        a[i].print();
        cout<<"std1 "<<b[i].rno<<" "<<b[i].name<<endl;
        cout<<"std2 "<<c[i].rno<<" "<<c[i].section<<" "<<c[i].atd<<endl;
   }
  return 0;
}