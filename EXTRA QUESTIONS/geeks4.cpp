/*Given two strings S and P.
 Find the smallest window in the string S consisting of all the characters(including duplicates) of the string P.
   Return "-1" in case there is no such window present. In case there are multiple such windows of same length, 
   return the one with the least starting index. 

Example 1:

Input:
S = "timetopractice"
P = "toc"
Output: 
toprac
Explanation: "toprac" is the smallest
substring in which "toc" can be found.
Example 2:

Input:
S = "zoomlazapzo"
P = "oza"
Output: 
apzo
Explanation: "apzo" is the smallest 
substring in which "oza" can be found*/

#include<iostream>
using namespace std;

void smallestwindow(string s1,string s2,int u,int y){
     int min,r,t,p=0;
for(int i=0;i<u;i++){
	for(int j=i+y;j<u;j++){
		int c=0;
	for(int l=0;l<=y;l++){ int w=0;
		for(int k=i;k<=j;k++){
			if(s2[l]==s1[k]){
				w++;
			}
		}
		if(w==0){
			break;
		}
		else{ c++;
		}
	}	
	if(c==y  ){ 
	if(p==0)	{
	min=j-i;r=j;t=i;p++;}
	if(p>0 && j-i<min){
		min=j-i;r=j;t=i;	
	}
	}			
	}
}
if(p>0){
for(int h=t;h<=r;h++){
	cout<<s1[h];
}}
else{
	cout<<"not possible";
}	
}

int main(){
	string s1,s2;
	getline(cin,s1);
	getline(cin,s2);
	int u=s1.length(),y=s2.length();
	smallestwindow(s1, s2, u, y);
	return 0;
}





















