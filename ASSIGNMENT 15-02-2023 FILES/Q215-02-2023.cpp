#include<iostream>
#include<fstream>
using namespace std;

int main(){
int m,n;
cout<<"sizes: ";
cin>>n>>m;
int a[n],b[m];
for(int i=0;i<n;i++){cin>>a[i];}
for(int i=0;i<m;i++){cin>>b[i];}
ofstream ots1,ots2,ots3;
ots1.open("file1.txt");ots2.open("file2.txt");
for(int i=0;i<n;i++){ots1<<a[i];ots1<<" ";}
for(int i=0;i<m;i++){ots2<<b[i];ots2<<" ";}
ots1.close();ots2.close();//ofstream ots3;
ifstream ins1,ins2;
ins1.open("file1.txt");ins2.open("file2.txt");
ots3.open("file3.txt");int l,q,p=0,e=0;int h=1;
 ins1>>l;ins2>>q;
while(h<=m+n)
 {   if(ins1.eof()){ots3<<q<<" ";cout<<" q =" <<q<<endl;p++;break;}
     if(ins2.eof()){ots3<<l<<" ";cout<<" p =" <<p<<endl;e++;break;}
     if(l<q){ots3<<l<<" ";ins1>>l;}
     else{ots3<<q<<" ";ins2>>q;}    
  h++;
 }  cout<<" e= "<<e<<" p= "<<p<<endl;
 if(h<m+n)
 {
    if(e==1){while(!ins1.eof()){ins1>>l;ots3<<l;ots3<<" ";}}
    if(p==1){while(!ins2.eof()){ins2>>q;ots3<<q;ots3<<" ";}}
 }  ins1.close();ins2.close();
 ots3.close();
return 0;
}