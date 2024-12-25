/*
Given a string containing digits from 2-9 inclusive, return all possible letter
combinations that the number could represent. Return the answer in any order.
A mapping of digits to letters (just like on the telephone buttons) is given below.
Note that 1 does not map to any letters.
Example 1:
Input: digits = "23";
Output: ["ad","ae","af","bd","be","bf","cd","ce","cf"]
Example 2:
Input: digits = "";
Output: []
Example 3:
Input: digits = "2";
Output: ["a","b","c"]
Constraints:
0 <= digits.length <= 4
digits[i] is a digit in the range ['2', '9']
*/

#include<bits/stdc++.h>
using namespace std;

void combinations(string s,string p,string map[8],int i=0,int j=0)
{
 if(i==s.length())
 {
   cout<<p<<" ";
 }
 else
 {  
    int h=(int)s[j]-48;
    for(int k=0;k<map[h-2].length();k++)
    {
       p[j]=map[h-2][k];
       combinations(s,p,map,i+1,j+1);
    }  
 }
}

int main()
{
   string s,p;cin>>s;p=s;
   string map[8]={"abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
   combinations(s,p,map);
   return 0;
}