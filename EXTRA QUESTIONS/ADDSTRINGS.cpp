#include<iostream>
#include<algorithm>
using namespace std;

 string a(string num1="9", string num2="100") 
    {    string sum,mun;
        int l=0,s=min(num1.length(),num2.length()),h=0;
        while(l<s)
        {
            int num=(num1[num1.length()-1-l]-48)+(num2[num2.length()-1-l]-48)+h;
            int a=num%10;a+=48;sum+=(char)a;
            h=num/10;l++;
        }
        reverse(sum.begin(),sum.end());
        if(num1.length()>s)
        {  
             while(l<num1.length())
              {
                 int num=(num1[num1.length()-1-l]-48)+h;
                 int a=num%10;a+=48;mun+=a;
                 h=num/10;l++;
              }
              if(h!=0){mun+='1';}
              reverse(mun.begin(),mun.end());            
        }
        else if(num2.length()>s)
        {  
             while(l<num2.length())
              {
                 int num=(num2[num2.length()-1-l]-48)+h;
                 int a=num%10;mun+=a;
                 h=num/10;l++;
              }
              if(h!=0){mun+='1';}
              reverse(mun.begin(),mun.end());            
        }
        else
        {
           if(h!=0){mun+='1';}
        }        
        mun+=sum;
        return mun;
        
    }

int main()
{
 cout<<a();
return 0;
}