#include<iostream>
#include<fstream>
#include<cstring>
#include<string>
using namespace std;

int palindrome(string s)
{  int l=0,h=s.length()-1;
  while(l<h)
  {
    if(s[l]==s[h]){l++;h--;}
    else{break;}
  }
  if(h<=l) return true;
  else return false;
}
int main()
{
string str1,str2,str3,q;
str1=" malayalam although numerous languages are spoken across india,  is considered as one of the difficult languages to learn. Still, it is non as difficult as arabi to speak and learn. The mandarin chinese is the most difficult language to learn in the world, especially for english speakers. Interestingly, it is also the most widely spoken language in the world";
cin>>str2;
ofstream ots;
ots.open("input.txt");
ots<<str1;ots.close();
ots.open("output.txt");ifstream ins;
ins.open("input.txt");
while(!ins.eof())
{
    ins>>str3;//cout<<"not "<<str3<<endl;
    if(str3.length()>=str2.length())
    {
        int i=0;
        while(i<str3.length())
        {      int j;q.erase(0,str2.length());
            for(j=i;j<i+str2.length();j++)
            {
              q+=str3[j];
            } //cout<<"q= "<<q<<endl;
            if(q==str2)
            {   cout<<str3<<endl;int g=palindrome(str3);
                if(g!=0)
                {
                    ots<<str3<<" ";
                }
                break;
            }
            else i++;
            if(j==str3.length()){break;} 
        }
    }
}
return 0;
}