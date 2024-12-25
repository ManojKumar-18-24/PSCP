/*Given an array of strings strs, group the
 anagrams together. You can return the answer
  in any order.

An Anagram is a word or phrase formed by 
rearranging the letters of a different word
 or phrase, typically using all the original 
 letters exactly once.

 

Example 1:

Input: strs = ["eat","tea","tan","ate","nat",
"bat"]
Output: [["bat"],["nat","tan"],["ate","eat",
"tea"]]
Example 2:

Input: strs = [""]
Output: [[""]]
Example 3:

Input: strs = ["a"]
Output: [["a"]]*/

#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

int main()
{
int n;
cout<<"size=";
cin>>n;
string a[n],b[n];
for(int i=0;i<n;i++)
{
	cin>>a[i];
}
for(int i=0;i<n;i++)
{
  b[i]=a[i];
} 
for(int i=0;i<n;i++)
{
	sort(a[i].begin(),a[i].end());
}

for(int i=0;i<n;i++)
{   	int y=0;
    for( ;y<i;y++){
    	if(!a[i].compare(a[y])){
    		break;
		}
	}
	if(y==i){cout<<b[i]<<" ";}
	
	for(int j=i+1;j<n && y==i;j++){
		if(!a[i].compare(a[j])){
			cout<<" "<<b[j]<<" ";
		}
	}if(y==i)cout<<"\n";
 } 
  
return 0;
}

