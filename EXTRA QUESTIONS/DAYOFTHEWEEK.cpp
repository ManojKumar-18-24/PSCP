/*Given a date, return the corresponding day 
of the week for that date.

The input is given as three integers 
representing the day, month and year
 respectively.

Return the answer as one of the following
 values {"Sunday", "Monday", "Tuesday", "Wednesday",
  "Thursday", "Friday", "Saturday"}.

Example 1:
Input: day = 31, month = 8, year = 2019
Output: "Saturday"
Example 2:
Input: day = 18, month = 7, year = 1999
Output: "Sunday"
Example 3:
Input: day = 15, month = 8, year = 1993
Output: "Sunday"
Constraints:
The given dates are valid dates between the years 1971 and 2100*/  //01-01-1971 is on friday..

#include<iostream>
using namespace std;

int main()
{
 int a[12]={31,28,31,30,31,30,31,31,30,31,30,31}; 
 int b[12]={31,29,31,30,31,30,31,31,30,31,30,31};
 string c[7]={"friday","saturday","sunday","monday","tuesday","wednesday","thursday"};
 int dd,mm,yy;cin>>dd>>mm>>yy;int sum=0;
 if(yy>1971)
 {
   sum+=dd;mm--;
   for(int i=0;i<mm;i++)
   {
      if(yy%4==0){sum+=b[i];}
      else{sum+=a[i];}
   }
   while(1)
   {
    yy--;
    if(yy%4==0){sum+=366;}
    else sum+=365;
    if(yy==1971){break;}
   }
 }
 else
 {     sum+=dd;mm--;
   for(int i=0;i<mm;i++)
   {
      sum+=a[i];
   }
 }
  int g=sum%7;cout<<sum<<endl;if(g==0){g=6;} else g--;
  cout<<c[g]<<endl;
return 0;
}