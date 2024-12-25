/*#include<iostream>
#include<fstream>
using namespace std;

struct stud
{string name;
int rn;};

void writes()
{ofstream fout("sample_test",ios::binary);
stud xyz;
xyz.rn=1;
xyz.name="NIT";
fout.write((char*)&xyz,sizeof(xyz));
xyz.rn=2;
xyz.name="Warangal";
fout.write((char*)&xyz,sizeof(xyz));
fout.close();}

void reads()
{ifstream fin("sample_test",ios::binary);
stud zyx;
while (!fin.eof())
{fin.read((char*)&zyx,sizeof(zyx));
cout<<zyx.rn<<"."<<zyx.name<<endl;}
fin.close();}

int main()
{
writes();
reads();
}*/


