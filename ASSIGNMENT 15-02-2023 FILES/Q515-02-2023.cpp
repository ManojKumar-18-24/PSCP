#include<iostream>
#include<cstring>
#include<fstream>
using namespace std;

int main()
{
 int a;
 string str="CSE of NITW is best ";
 int x[100];int k=0;
 for(int i=0;i<str.length();i++)
 {
   if(str[i]==32){x[k]=i;k++;}
 }
 for(int j=0;j<k;j++){cout<<x[j]<<" ";}
 ofstream ots,ots1;
 ots.open("file4.txt");
 ots<<str;ots.close();
 ifstream ins;ins.open("file4.txt");
 ots1.open("file5.txt"); int y=ins.tellg();
 string o;ins.seekg(-1,ios::end);k--;
 while(1)
 {
 if(k<0){break;}
  while(1)
  {  ins.seekg(-1,ios::cur);
     a=ins.tellg();cout<<x[k]<<endl;
     if(a==x[k]){k--;break;}
  }
 ins>>o;
 ots1<<o<<" ";
 ins.seekg(x[k+1]-1);
 }
 ins.seekg(0);ins>>o;ots1<<o;

 return 0;
}