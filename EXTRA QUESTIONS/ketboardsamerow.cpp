/*Given an array of strings words, return the words that 
can be typed using letters of the alphabet on only one
 row of American keyboard like the image below.

In the American keyboard:

the first row consists of the characters "qwertyuiop",
the second row consists of the characters "asdfghjkl",
 and
the third row consists of the characters "zxcvbnm".

 

Example 1:

Input: words = ["Hello","Alaska","Dad","Peace"]
Output: ["Alaska","Dad"]
Example 2:

Input: words = ["omk"]
Output: []
Example 3:

Input: words = ["adsdf","sfd"]
Output: ["adsdf","sfd"]*/

#include<iostream>
#include<cstring>
using namespace std;

int func(string b[3],char s)
{   
	for(int i=0;i<3;i++)
{
    for(int j=0;j<b[i].length();j++)
	{
		if(b[i][j]==s)
		{
          return i;
		}
	}
}
}

void func2(int n,string b[3],string s)
{  int i;
	for( i=0;i<s.length();i++)
	{        int r=0;
		for(int j=0;j<b[n].length();j++)
		{
			if(s[i]==b[n][j]){r++;}
		}
		if(r==0){
			break;
		}
	}
	if(i==s.length()){cout<<s;}
}

int main(){
int n;
cout<<"n= ";
cin>>n;
string a[n];int c[n];
for(int i=0;i<n;i++)
{
	cin>>a[i];
}
string b[3]={"qwertyuiop","asdfghjkl","zxcvbnm"};
for(int i=0;i<n;i++)
{
	c[i]=func(b,a[i][0]);
	func2(c[i],b,a[i]);
}

return 0;
}

