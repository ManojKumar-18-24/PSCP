#include<iostream>
using namespace std;

    int consecutiveNumbersSum(int n) 
    {
        int product=2,r=1,count=0;
        while(product<n)
        {
            int a=n-(r*(r+1))/2;            
            if(a%product==0){count++;cout<<"r= "<<r<<endl;}

            product++;r++;
        }
        return count+1;
    }


int main()
{  int n;cin>>n;
    cout<< consecutiveNumbersSum( n) ;
return 0;
}