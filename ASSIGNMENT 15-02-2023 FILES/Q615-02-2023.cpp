#include<iostream>
#include<fstream>
using namespace std;

int main()
{
ifstream ins1,ins2;ofstream ots;ots.open("file7,txt");
ins1.open("file6.txt");ins2.open("file6.txt");string p,q;

while(!ins1.eof())
{   ins2.seekg(0);
    ins1>>p;int w=0;
    while(1)
    {
        ins2>>q;
        if(ins1.tellg()==ins2.tellg())
        {
            break;
        }
        else
        {
           if(p==q){w++;}
        }
    }
    if(w==0)
    {
        while(!ins2.eof())
        {
            ins2>>q;
           if(p==q){w++;}
        }
        ots<<p<<" "<<w+1<<"\n";
    }

}

return 0;
}
