#include<iostream>
using namespace std;

struct complex
{
	int real;
	int imag;
};

complex read(complex t)
{
	cin>>t.real;
	cin>>t.imag;
	return t;
}

complex add(complex f,complex g)
{
	complex s;
	s.real=f.real+g.real;
	s.imag=f.imag+g.imag;
	return s;
}

complex add(complex f,complex g)
{
	complex s;
	s.real=f.real-g.real;
	s.imag=f.imag-g.imag;
	return s;
}


complex mul(complex f,complex g)
{
	complex p;
	p.real=f.real*g.real-f.imag*g.imag;
	p.imag=f.real*g.imag+f.imag*g.real;
	return p;
}

int main(){
  complex a,b;
  complex g= read(a);complex f=read(b);
   complex r=add(g,f);complex p=mul(g,f);complex z=sub(g,f);
  cout<<"("<<g.real<<"+ i"<<g.imag<<")"<<" - ("<<f.real<<"+ i"<<f.imag<<") ="<<"("<<z.real<<"+ i"<<z.imag<<")";
  cout<<"\n("<<g.real<<"+ i"<<g.imag<<")"<<" + ("<<f.real<<"+ i"<<f.imag<<") ="<<"("<<r.real<<"+ i"<<r.imag<<")";
  cout<<"\n("<<g.real<<"+ i"<<g.imag<<")"<<"("<<f.real<<"+ i"<<f.imag<<") ="<<"("<<p.real<<"+ i"<<p.imag<<")";
return 0;
}

