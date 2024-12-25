#include<iostream>
using namespace std;

class complex
{  private:
  float real;
  float imag;
  public:
  void set(int a,int b)
  {
    real=a;imag=b;
  }
  void print()
  {
    cout<<real<<"+ i("<<imag<<")";
  }
  complex sum(complex &c2 )
  {
    complex c3;
    c3.real=real+c2.real;
    c3.imag=c2.imag+imag;
    return c3;
  }
};

int main(){
complex c1,c2,c3;int a,b,c,d;
cin>>a>>b>>c>>d;
c1.set(c,d);
c2.set(a,b);
c3=c1.sum(c2);
c3.print();
return 0;
}