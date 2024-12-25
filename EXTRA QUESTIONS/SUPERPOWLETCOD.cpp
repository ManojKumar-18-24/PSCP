/*372. Super Pow
Medium
703
1.3K
Companies
Your task is to calculate 
ab mod 1337 where a is a positive integer
and b is an extremely large positive integer given in the form of an array.

Example 1:

Input: a = 2, b = [3]
Output: 8
Example 2:

Input: a = 2, b = [1,0]
Output: 1024
Example 3:

Input: a = 1, b = [4,3,3,8,5,2]
Output: 1
 
Constraints:

1 <= a <= 231 - 1
1 <= b.length <= 2000
0 <= b[i] <= 9
*/

#include<iostream>
#include<string>
using namespace std;

int main()
{  
   string p,q;
   int n;cin>>n;int a[n];
   for(int i=0;i<n;i++) cin>>a[i];
   for(int i=0;i<n;i++) a[i]+=48;
   for(int i=0;i<n;i++) p+=(char)a[i];
   
   
return 0;
}