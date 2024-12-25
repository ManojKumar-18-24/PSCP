#include<bits/stdc++.h>
using namespace std;

    void nextPermutation(vector<int>& nums) 
    {  int i,p,m,a=0;
        for( i=nums.size()-1;i>0;i--)
        {
            if(nums[i-1]<nums[i])
            {   p=nums[i-1];
                break;
            }
        } int min=nums[i]-p;m=i;
        for(int q=i+1;q<nums.size();q++)
        {
            if(nums[q]-p<min && nums[q]>=p){min=nums[q]-p;m=q;a++;}
        }
        if(i!=0) swap(nums[i-1],nums[m]);
        
        sort(nums.begin()+i,nums.end());
        for(i=0;i<nums.size()-1;i++)cout<<nums[i]<<" ";
    }

int main()
{
 vector<int>v={1,2,3};
 nextPermutation(v);
return 0;
}