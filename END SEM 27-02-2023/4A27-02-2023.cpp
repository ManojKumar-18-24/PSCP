#include<iostream>
#include<string>
using namespace std;

int main()
{
  char str1[1000],str2[1000]; 
 cin>>str1>>str2;
 int l=0,h=0;
 while(1)
 {
    while(1)
    {   
        if(*(str1 +l)<93 && *(str1 +l)>=65)
        {l++;}
        else if(*(str1+l)>=97 && *(str1 +l)<123)
        {l++;}
        else break;
    }
     while(1)
    {    
        if(*(str2+h)<58 && *(str2+h)>48)
        {h++;}
        else break;
    } 
    char temp;
    temp=*(str1+l);
    *(str1+l)=*(str2+h);
    *(str2+h)=temp;
    l++;h++;
    if(*(str1+l)=='\0' || *(str2+h)=='\0') break; 
 }
 cout<<str1<<endl;
 cout<<str2<<endl;
return 0;
}