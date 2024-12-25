/*The count-and-say sequence is a sequence of digit strings defined 
by the recursive formula:

countAndSay(1) = "1"
countAndSay(n) is the way you would "say" the digit string 
from countAndSay(n-1), which is then converted into a different 
digit string.
To determine how you "say" a digit string, split it into
the minimal number of substrings such that each substring
contains exactly one unique digit. Then for each substring, 
say the number of digits, then say the digit. Finally, 
concatenate every said digit.
For example, the saying and conversion for digit
 string "3322251":
Given a positive integer n, return the
 nth term of the count-and-say sequence.
Example 1:
Input: n = 1
Output: "1"
Explanation: This is the base case.
Example 2:
Input: n = 4
Output: "1211"
Explanation:
countAndSay(1) = "1"
countAndSay(2) = say "1" = one 1 = "11"
countAndSay(3) = say "11" = two 1's = "21"
countAndSay(4) = say "21" = one 2 + one 1 = "12" + "11" = "1211"
Constraints:
1 <= n <= 30*/

#include<iostream>
using namespace std;

void countandsay(string s,string p,int n)
{  static int i=0,j=0,w=0,c=1;
  if(i<s.length())
  {
     if(j<i)
     {
        if(s[i]==s[j]){i++;j=0;} else j++; countandsay(s,p,n);
     }
     else if(j<s.length())
     {
        if(s[i]==s[j]){w++;}  j++; countandsay(s,p,n);
     }
     else
     {  
        p+=to_string(w);p+=s[i];j=0;i++;w=0;countandsay(s,p,n);
     }
  }
  else
  {
    c++;s=p;p.erase(0,p.length());i=0;j=0;w=0;if(c!=n) countandsay(s,p,n); else cout<<s<<endl;
  }   
}

int main()
{
  string s="1",p;int n;cin>>n;if(n==1) cout<<1;
   else countandsay(s,p,n);
return 0;
}

/*
  void countandsay(string &s,string p,int n,int &i,int &j,int &w,int &c)
{  
  if(i<s.length())
  {
     if(j<i)
     {
        if(s[i]==s[j]){i++;j=0;} else j++; countandsay(s,p,n,i,j,w,c);
     }
     else if(j<s.length())
     {
        if(s[i]==s[j]){w++;}  j++; countandsay(s,p,n,i,j,w,c);
     }
     else
     {  
        p+=to_string(w);p+=s[i];j=0;i++;w=0;countandsay(s,p,n,i,j,w,c);
     }
  }
  else
  {
    c++;s=p;p.erase(0,p.length());i=0;j=0;w=0;if(c!=n) countandsay(s,p,n,i,j,w,c); 
  }   
}
    string countAndSay(int n) 
    {
        int i=0,j=0,w=0,c=1;
        string s="1",p;
        countandsay(s,p,n,i,j,w,c);
        return s;
    }
*/