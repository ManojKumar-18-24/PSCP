#include<iostream>
#include<string>
using namespace std;

void decimal(string s)
{  
    int i=0;string p;int n=0;
    while(i<s.length())
    {
        while(s[i]!=32 && i<s.length())
        {  
            p+=s[i];i++;
        }  
          if(p=="One"){n=(n*10)+1;}
    else  if(p=="Two"){n=(n*10)+2;}
    else  if(p=="Three"){n=(n*10)+3;}
    else  if(p=="Four"){n=(n*10)+4;}
    else  if(p=="Five"){n=(n*10)+5;}
    else  if(p=="Six"){n=(n*10)+6;}
    else  if(p=="Seven"){n=(n*10)+7;}
    else  if(p=="Eight"){n=(n*10)+8;}
    else  if(p=="Nine"){n=(n*10)+9;}
    else  if(p=="Zero"){n=(n*10)+0;}
    else{cout<<"invalid string";n=-3;break;}
    p.erase(0,p.length());i++;
    }
    if(n!=-3){cout<<n<<endl;} 
}

int main()
{  string s;
   getline(cin,s);
   decimal(s);
return 0;
}