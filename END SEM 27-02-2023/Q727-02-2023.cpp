#include<iostream>
#include<fstream>
using namespace std;

class file
{
  private:
  string filename;
  string data;
  public:
   file(string a,string b)
   {
    filename=a;filename+=".txt";
    data=b;
    ofstream ots;
    ots.open(filename);
    ots<<b;
   }
   file(string a)
   {
    filename=a;filename+=".txt";
    ofstream ots;
    ots.open(filename);   
   }
   file operator+(file b)
   {
     file d("f3",data+" "+b.data);
     return d;
   }
};

int main()
{  string str1,str2;
     getline(cin,str1);getline(cin,str2);
    file a("f1",str1);
    file b("f2",str2);
    file c=a+b;
    ifstream ots;ots.open("f3.txt");
    string h;
    while(!ots.eof())
    {
      ots>>h;cout<<h<<" ";
    }   
return 0;
}