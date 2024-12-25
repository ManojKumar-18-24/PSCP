#include<iostream>
#include<cstring>
using namespace std;

void print()
{
  string a[7]={"Mon","Tue","Wed","Thu","Fri","Sat","Sun"};
  string b[7]={"Red","Orange","Yellow","Green","Blue","Indigo","Violet"};
  char c[7]={'$','*','?','#','+','&','@'};

  for(int i=0;i<7;i++)
     {
       if(i<3)
       {
        for(int j=1;j<=3-i;j++){cout<<" ";}
       }
       if(i>3)
       {
        for(int j=1;j<=i-3;j++){cout<<" ";}
       }
      cout<<a[i]<<"/"<<12-i;
      if(i<=3)
      {
        for(int j=0;j<2*i+1;j++)
        {
            cout<<c[i];
        }
      }
      else
      {   for(int j=0;j<2*(6-i)+1;j++)
        {
            cout<<c[6-i];
        }
      }
      switch(i)
      {
        case 0:cout<<"C";break;
        case 1:cout<<"S";break;
        case 2:cout<<"E";break;
        case 3:cout<<"N";break;
        case 4:cout<<"I";break;
        case 5:cout<<"T";break;
        case 6:cout<<"W";break;
      }
     if(i<=3)
      {
        for(int j=0;j<2*i+1;j++)
        {
            cout<<c[6-i];
        }
      }
      else
      {   for(int j=0;j<2*(6-i)+1;j++)
        {
            cout<<c[i];
        }
      }
      cout<<i<<"/"<<b[i]<<endl;      
     }
}
int main()
{
  print();
return 0;
}
