#include<iostream>
using namespace std;


class employee
{ private:
  float salary;
  float working;
  public:
  void getinfo()
  {  cout<<"enter salary and no.of working hours";
    cin>>salary>>working;
  }
  void addsal()
  {
    if(salary<5000){salary+=1000;}
  }
  void addwork()
  {
    if(working>6){salary+=5000;}
  }
  void print()
  {
    cout<<"final salary = "<<salary;
  }
};

int main(){
employee e1;
e1.getinfo();
e1.addsal();
e1.addwork();
e1.print();
return 0;
}