#include<iostream>
#include<fstream>
using namespace std;

int main(){
ofstream ots1,ots2,ots3,ots4,ots5;
ots1.open("file8.txt");
ots2.open("file9.txt");
ots3.open("file10.txt");
ots1<<"NITW \nWarangal";
ots2<<"IITH \nHyderabad";
ots3<<"IITTP \nTirupati"; ots1.close();ots2.close();ots3.close();
ifstream ins1,ins2,ins3,ins4;
ins1.open("file8.txt");
ins2.open("file9.txt");
ins3.open("file10.txt");
ots4.open("temp.txt");string k;
while(!ins1.eof())
{
    ins1>>k;cout<<"1"<<k<<endl;
    ots4<<k;ots4<<"\n";
}ins1.seekg(0);ots1.open("file8.txt");
while(!ins3.eof())
{
    ins3>>k;cout<<"2"<<k<<endl;
    ots1<<k;ots1<<"\n";
}ins3.seekg(0);ots3.open("file10.txt");
while(!ins2.eof())
{
    ins2>>k;cout<<"3"<<k<<endl;
    ots3<<k;ots3<<"\n";
}ins2.seekg(0);ots5.open("file9.txt");
ins4.open("temp.txt");
cout<<ins4.tellg()<<endl;
while(!ins4.eof())
{    getline(ins4,k);
    cout<<"4"<<k<<endl;
    ots5<<k;ots5<<"\n";
}
cout<<ins4.tellg()<<endl;
return 0;
}