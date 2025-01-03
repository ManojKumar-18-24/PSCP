/*Given two arrays of strings list1 and list2, find the common strings with the least index sum.
A common string is a string that appeared in both list1 and list2.
A common string with the least index sum is a common string such that if it appeared at list1[i] and list2[j]
 then i + j should be the minimum value among all the other common strings.
Return all the common strings with the least index sum. Return the answer in any order.

Example 1:

Input: list1 = ["Shogun","Tapioca Express","Burger King","KFC"], list2 = ["Piatti","The Grill at Torrey Pines","Hungry Hunter Steakhouse","Shogun"]
Output: ["Shogun"]
Explanation: The only common string is "Shogun".
Example 2:

Input: list1 = ["Shogun","Tapioca Express","Burger King","KFC"], list2 = ["KFC","Shogun","Burger King"]
Output: ["Shogun"]
Explanation: The common string with the least index sum is "Shogun" with index sum = (0 + 1) = 1.
Example 3:

Input: list1 = ["happy","sad","good"], list2 = ["sad","happy","good"]
Output: ["sad","happy"]
Explanation: There are three common strings:
"happy" with index sum = (0 + 1) = 1.
"sad" with index sum = (1 + 0) = 1.
"good" with index sum = (2 + 2) = 4.
The strings with the least index sum are "sad" and "happy"*/

#include<iostream>
#include<string>
using namespace std;

int function(string s,string p){
    if(s==p)
    {
        return true;
    }
    else{
        return false;
    }
}

int main(){
int n,m;
cout<<"enter size of 1st string array ";
cin>>n;
cout<<"enter size of 2st string array ";
cin>>m;
string a[n],b[m];
for(int i=0;i<n;i++){cin>>a[i];}
for(int i=0;i<m;i++){cin>>b[i];}   int min=m+n;
for(int i=0;i<n;i++)
{
    for(int j=0;j<m;j++)
    {
        if(function(a[i],b[j])){
            if(i+j<min){min=i+j;;}
        }
    }
}
for(int i=0;i<n;i++)
{
    for(int j=0;j<m;j++)
    {
        if(function(a[i],b[j])){
            if(i+j==min && min<m+n){cout<<"["<<a[i]<<"] , ["<<b[j]<<"]";} cout<<"    ";
        }
    }
}
if(min==m+n){cout<<"[   ]";}
return 0;
}