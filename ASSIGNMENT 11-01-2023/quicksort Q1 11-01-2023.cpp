#include<iostream>
using namespace std;

int find(int a[],int low,int high)
{
  int l=low+1;
  int h =high;
  while(l<h)
  {
    while(a[l]<=a[low])
	  {
  		l++;
	  }
    while(a[h]>a[low])
	  {
	  	h--;
	  }
	if(l<h)
	  {
	  	int t=a[l];
	  	a[l]=a[h];
	  	a[h]=a[t];
	  	for(int i=0;i<12;i++){	cout<<a[i]<<" ";}cout<<endl;
	  }
  	
 }
return h;
}

void quicksort(int a[],int low,int high)
{  for(int i=0;i<12;i++){	cout<<a[i]<<" ";}cout<<endl;
int s=find(a,low,high);cout<<s<<endl;
if(s>=low && s<=high)
{k
int t=a[s];
a[s]=a[low];
a[low]=t;
for(int i=0;i<12;i++){	cout<<a[i]<<" ";}cout<<endl;
if(low<s-1){
quicksort(a,low,s-1);}
{
if(high>s+1)quicksort(a,s+1,high);}	
}
}
int main(){
	
	int a[]={4,56,3,-6,22,-100,78,45,34,57,11,-59};
	quicksort(a,0,12);
	for(int i=0;i<12;i++){	cout<<a[i]<<" ";}
	
	
}
