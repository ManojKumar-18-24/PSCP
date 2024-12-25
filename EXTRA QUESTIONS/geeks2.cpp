/*  QUESTION:
Given an array of N integers arr[] where each element represents the max length of the jump that can be made forward from that element. Find the minimum number of jumps to reach the end of the array (starting from the first element). If an element is 0, then you cannot move through that element.

Note: Return -1 if you can't reach the end of the array.


Example 1:

Input:
N = 11 
arr[] = {1, 3, 5, 8, 9, 2, 6, 7, 6, 8, 9} 
Output: 3 
Explanation: 
First jump from 1st element to 2nd 
element with value 3. Now, from here 
we jump to 5th element with value 9, 
and from here we will jump to the last. 
Example 2:

Input :
N = 6
arr = {1, 4, 3, 2, 6, 7}
Output: 2 
Explanation: 
First we jump from the 1st to 2nd element 
and then jump to the last element*/

#include<iostream>
using namespace std;

int main(){
		int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++){
		cin>>a[i];
	} int p=0,jump=0, t=0;
	while(1){
		int t=a[p];jump++;
		if(a[p]==0 && p<n-1){
			cout<<"not possible";
			break;
		}
		p+=t;
		if(p>=n-1){
			cout<<"minimum jumps is/are "<<jump;
			break;
		}
	
	}
}
