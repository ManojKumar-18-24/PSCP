#include<iostream>
#include<string>
using namespace std;

void multiply(string num1, string num2)
    {    string sum,dup,sum1,p;int num;
        for(int i=num2.length()-1;i>=0;i--)
           {    int g=0;
              for(int j=num1.length()-1;j>=0;j--)
                {
                    num=(num1[j]-48)*(num2[i]-48);num+=g;
                    dup+=(char)(num%10+48);
                    g=num/10;
                }
               int l=0,h=dup.length()-1;
               while(l<h)
               {
                   char d=dup[l];
                   dup[l]=dup[h];
                   dup[h]=d;l++;h--;
               } 
               if(g!=0) p=to_string(g)+dup; else p=dup;
               dup=p;   p.erase(0,p.length());
               for(int k=num2.length()-1;k>i;k--)
                dup+='0'; 
            if(i==num2.length()-1) sum+=dup;
            else
            {
                g=0;h=0;int x=sum.length()-1,y=dup.length()-1;
                while(1)
                {  
                   if(x<g )
                   {
                     while(1)
                     {    if(y<g) break;
                          num=(dup[dup.length()-1-g]-48);num+=h;
                          l=num%10;sum1+=(char)(l+48); 
                          h=num/10;g++;                        
                     }
                     break;
                   }
                   else if (y<g)
                   {
                     while(1)
                     {    if(x<g) break;
                          num=(sum[sum.length()-1-g]-48);num+=h;
                          l=num%10;sum1+=(char)(l+48); 
                          h=num/10;g++;                        
                     }
                     break;                    
                   }
                 else  
                   {num=(sum[sum.length()-1-g]-48)+(dup[dup.length()-1-g]-48);num+=h;
                   l=num%10;sum1+=(char)(l+48); 
                   h=num/10;g++;
                   }
                } 
                sum.erase(0,sum.length()) ;
               if(h!=0) p=to_string(h);
               int l=0,h=sum1.length()-1;
               while(l<h)
               {
                   char d=sum1[l];
                   sum1[l]=sum1[h];
                   sum1[h]=d;l++;h--;
               }
               
               sum=p+sum1; sum1.erase(0,sum1.length());        
            }p.erase(0,p.length());dup.erase(0,dup.length()) ;
           }
        cout<<sum;        
    }

int main(){
 string num1="145",num2="5669";
 multiply(num1,num2);
return 0;
}