#include<bits/stdc++.h>
using namespace std;

    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) 
    {
        vector<int> nums3;
        nums3.resize(nums1.size()+nums2.size());
        for(int i=0;i<nums1.size();i++)nums3[i]=nums1[i];
        for(int i=0;i<nums2.size();i++)nums3[i+nums1.size()]=nums2[i];
        sort(nums3.begin(),nums3.end());
        double r;
        if(nums3.size()%2!=0)
        {
            r=nums3[(nums3.size()-1)/2];
        }
        else
        {
           cout<<nums3.size()<<endl; r=(nums3[(nums3.size())/2]+nums3[((nums3.size())/2)-1])/2;
        }
        return r;
    }

int main()
{
 vector<int>v={1,2};
 vector<int> v1={3,4};
 cout<<findMedianSortedArrays(v, v1) ;
return 0;
}