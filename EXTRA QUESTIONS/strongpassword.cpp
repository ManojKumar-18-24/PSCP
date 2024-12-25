#include<iostream>
using namespace std;

int main(){
string password;
cin>>password;int a=0,b=0,c=0,d=0,i=0;
for(int i=0;i<password.length();i++)
{
  
    if(password[i]>=48 && password[i]<=57){a++;}
  
    else if(password[i]>96 && password[i]<123){b++;}

   else  if(password[i]>64 && password[i]<='Z'){c++;}
  
    else {d++;}
}
if(a==0){i++;}if(b==0){i++;}if(c==0){i++;}if(d==0){i++;}
if(password.length()<=3){cout<<6-password.length();}
if(password.length()==4){if(i==3){cout<<"3";}else{cout<<"2";}}
if(password.length()==5){if(i==3){cout<<"3";}else if(i==2){cout<<"2";}else cout<<"1";}
if(password.length()==6){if(i==0){cout<<"0";} else if(i==3){cout<<"3";}else if(i==2){cout<<"2";}else cout<<"1";}
if(password.length()>6){cout<<i;}

return 0;
}