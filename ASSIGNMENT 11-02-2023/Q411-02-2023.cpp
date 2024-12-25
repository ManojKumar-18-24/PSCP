#include<iostream>
using namespace std;

class dist
{  private:
  int feet;
  float inches;
  public:
  void set(int a,float b)
  {
    feet=a;inches=b;
  }
  void print()
  {
    cout<<"feets= "<<feet<<"+"<<inches;
    cout<<endl;
  }
  dist sum(dist &c2 )
  {
    dist c3;
    c3.feet=feet+c2.feet;
    c3.inches=inches+c2.inches;
    if(c3.inches>=12){c3.feet++;c3.inches-=12;}
    return c3;
  }
};

int main(){

dist c1,c2,c3;
int a,b,c,d;
cin>>a>>b>>c>>d;
c1.set(c,d);
c2.set(a,b);
c3=c1.sum(c2);
c1.print();
c2.print();
c3.print();
return 0;
}