#include<iostream>
#include<fstream>
using namespace std;

int main(){
int n,m,y,z;
cin>>n>>m;
int a[n],b[m];
for(int i=0;i<n;i++) cin>>a[i];
for(int i=0;i<m;i++) cin>>b[i];
ofstream ots1,ots2,ots3;
ots1.open("data1.txt");ots2.open("data2.txt");
for(int i=0;i<n;i++){ots1<<a[i];ots1<<" ";}
for(int i=0;i<m;i++){ots2<<b[i];ots2<<" ";}
ots1.close();ots2.close();
ots3.open("data3.txt");
ifstream ins1,ins2;
ins1.open("data1.txt");ins2.open("data2.txt");
while(1)
{
   ins1>>y;ins2.clear();
   if(ins1.eof()){break;}
   ins2.seekg(0,ios::beg);  
   while(1)
   {
    ins2>>z;
     if(ins2.eof()){break;}
    if(y==z && y%2==0) {cout<<y<<endl;ots3<<y;ots3<<" ";}
   }
} ins1.clear();
 ins1.seekg(0,ios::beg);
while(1)
{
   ins1>>y; if(ins1.eof()){break;}
   ins2.clear();
   ins2.seekg(0,ios::beg);
  
   while(1)
   {
    ins2>>z; if(ins2.eof()){break;}
    if(y==z && y%2!=0) {cout<<y<<endl;ots3<<y;ots3<<" ";}
   }
}
ins1.close();ins2.close();
return 0;
}


/*
#include<iostream>
#include<fstream>
using namespace std;

int main() {
    int n,m,y,z;
    cin>>n>>m;
    int a[n],b[m];
    for(int i=0;i<n;i++) cin>>a[i];
    for(int i=0;i<m;i++) cin>>b[i];
    ofstream ots1,ots2,ots3;
    ots1.open("data1.txt"); ots2.open("data2.txt");
    for(int i=0;i<n;i++){ ots1<<a[i]<<" "; }
    for(int i=0;i<m;i++){ ots2<<b[i]<<" "; }
    ots3.open("data3.txt");
    ifstream ins1,ins2;
    ins1.open("data1.txt"); ins2.open("data2.txt");
    while(ins1>>y) {
        ins2.seekg(0);
        while(ins2>>z) {
            if(y==z && y%2==0) { ots3<<y<<" "; }
        }
    }
    ins1.clear(); ins1.seekg(0);
    while(ins1>>y) {
        ins2.seekg(0);
        while(ins2>>z) {
            if(y==z && y%2!=0) { ots3<<y<<" "; }
        }
    }
    return 0;
}*/
