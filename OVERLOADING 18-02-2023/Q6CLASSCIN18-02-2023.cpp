#include <iostream>
using namespace std; 
class Date
{ 
 int da, mo, yr; 
public: 
  Date() 
 { 
 da = 0; mo = 0; yr = 0; 
 } 
 Date(int d, int m, int y) 
 { 
 da = d; mo = m; yr = y; 
 } 
 friend ostream& operator<<(ostream& os, const Date& dt); 
 friend istream& operator>>(istream& os,  Date& dt);
}; 
ostream& operator<<(ostream& os, const Date& dt) 
{ 
 os << dt.da << '/' << dt.mo << '/' << dt.yr; 
 return os; 
} 

istream& operator>>(istream& os, Date& dt) 
{ 
 os >>dt.da >>dt.mo>> dt.yr; 
 return os; 
} 

int main() 
{ Date dt;
 cin>>dt;
 cout << dt; 
 return 0;
}