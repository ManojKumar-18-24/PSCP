/*You are given an array of words where each word 
consists of lowercase English letters.

wordA is a predecessor of wordB if and only if we 
can insert exactly one letter anywhere in wordA
 without changing the order of the other characters
  to make it equal to wordB.

For example, "abc" is a predecessor of "abac",
 while "cba" is not a predecessor of "bcad".
A word chain is a sequence of words [word1, 
word2, ..., wordk] with k >= 1, where word1 is
 a predecessor of word2, word2 is a predecessor of
  word3, and so on. A single word is trivially a 
  word chain with k == 1.

Return the length of the longest possible word 
chain with words chosen from the given list of words.

Example 1:

Input: words = ["a","b","ba","bca","bda","bdca"]
Output: 4
Explanation: One of the longest word chains is
 ["a","ba","bda","bdca"].
Example 2:

Input: words = ["xbc","pcxbcf","xb","cxbc","pcxbc"]
Output: 5
Explanation: All the words can be put in a 
word chain ["xb", "xbc", "cxbc", "pcxbc", "pcxbcf"].*/


#include<iostream>
#include<string>
#include<cstring>
using namespace std;

int check(string s,string p)
{   static int i=0;
    string a=s;
    a.erase(i,1);//cout<<"a="<<a<<endl;
    if(i==s.length()){i=0;return 0;}
    else if(a.compare(p)==0){i=0;return 1;}
    else{i++;return check(s,p);}
}

int pr(string a[],int n)
{  static int i=0,j=1,count=1,max,p=0;
  if(p==n){return max;}
  else if(j==n)
  {
    p++;i=p;j=0;if(i==1){max=count;}else if(count>max){max=count;} pr(a,n);
  }
  else if(a[i].length()-a[j].length()==1)
  {   
      int g=check(a[i],a[j]);//cout<<"i= "<<i<<"j= "<<j<<" g= "<<g<<endl;
      if(g==1){count++;i=j;j=0;pr(a,n);}
      else{j++;pr(a,n);}
  }
  else{
    j++;pr(a,n);
  }
}

int main()
{
int n;cin>>n;
string a[n];
for(int i=0;i<n;i++){cin>>a[i];}
cout<<pr(a,n);
return 0;
}