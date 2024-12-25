#include<bits/stdc++.h>
using namespace std;
int c=0;

int anag(string s,string p)
{   
    sort(s.begin(),s.end());
    sort(p.begin(),p.end());
    if(s==p) return true;
    return false;
}

void permutations(string s,string p,int i=0)
{
    if(i==s.length())
    {
        if(anag(s,p))
        {    c++;
            cout<<p<<" ";
        }
    }
    else
    {
        for(int j=0;j<s.length();j++)
        {   
            p[i]=s[j];
            permutations(s,p,i+1);
        }
    }
}

int main()
{
  string s;cin>>s;
  string p=s;
  permutations(s,p);
  cout<<endl<<c;
return 0;
}