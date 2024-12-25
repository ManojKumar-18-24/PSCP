/*Given a string s containing just the characters '(',
 ')', 
'{', '}', '[' and ']', determine if the input string
 is valid.

An input string is valid if:

Open brackets must be closed by the same type of
 brackets.
Open brackets must be closed in the correct order.
Every close bracket has a corresponding open bracket
 of the same type*/
 
#include<iostream>
#include<string>
using namespace std;

int function2(string s,int w,int r)
{
	if((r-w)%2!=0)
	{
		int l=w+1;
		int h=r-1;
		while(l<h)
		{
			if(s[h]-s[l]==2 || s[h]-s[l]==1)
			{
				l++;
				h--;
			}
			else
			{
				break;
			}
		}
		
		if(l<h){return 0;}
		else{return 1;}	
	}
	else
	{
		return 0;
	}
}


void function(string s)
{
    static int p=0,i=0,w,r;
    if(i>=s.length())
    {
    	cout<<"false";
	}
    else if(p==1)
    {
       if(s[i+1]==s[w]+2 || s[i+1]==s[w]+1)
	   {
	   	   r=i+1;
	   	   int g=function2(s,w,r);
	   	   if(g==1)
			  {   if(r==s.length()-1){cout<<"true"; }
			      else{   i=r+1;p=0;function(s);}
			   }
			  
		   else if(g==0){i=r;function(s);}
		   	  
	   } 
	   else
	   {
	   	i++;
	   	function(s);
	   }	
	}
	else if(p==0)
	{
		if(s[i]==41)
		{   w=i;
			p++;
			function(s);
		}
		else if(s[i]==91)
		{    w=i;
			p++;
			function(s);
		}
		else if(s[i]==123)
		{    w=i;
			p++;
			function(s); 
		}
	}	
}

int main()
{
string s;
getline(cin,s);
function(s);
return 0;
}

