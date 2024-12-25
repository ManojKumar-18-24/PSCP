#include<iostream>
using namespace std;


class bank
{  private:
  int acno;
  char a[20];
  long int bal,h=0,p;
   
   public:
   void openaccount()
    { cout<<"acno =";
      cin>>acno;
     cout<<"u can end with 1";
     for(int j=0;j<20;j++){cin>>a[j];
         if(a[j]=='1') break;}
        cout<<"bal = ";
        cin>>bal;
    }
    void showaccount()
    {  
    cout<<"acno =";
      cout<<acno;
     cout<<"u can end with 1";
     for(int j=0;j<20;j++){cout<<a[j];
         if(a[j]==1) break;}
        cout<<"bal = ";
        cout<<bal;
    }
    void deposit()
    {  long int  n;
      cout<<"enter dep ";
      cin>>n;p=n;
      bal+=n;
    }
    void withdraw()
    {
      long int n;
     cout<<"enter withdrawal ";
     cin>>n;
    if(n<=bal)
    { h=n;
     bal-=n;
    }
    else cout<<"cant do bro";
    }
    void record()
    {cout<<"account is credited "<<p;
     cout<<"account is debited "<<h;
     cout<<"final balance = "<<bal;
    }
    
};


int main()
{  bank b1,b2,b3;
     b1.openaccount();
  b2.openaccount();
   b3.openaccount();
  b1.showaccount();cout<<endl;
  b2.showaccount();cout<<endl;
   b3.showaccount();cout<<endl;
 cout<<"u can end with 4";
   while(true)
    {  int m;
      cout<<"enter no first 1 or 2 or 3";
     cin>>m;
     if(m==1)
    {  long int k;
     cout<<"debit for 1 and credit for 2"
    ;cin>>k;
    if(k==1) b1.withdraw();
    else b1.deposit();
    }
    if(m==2)
    {  long int k;
     cout<<"debit for 1 and credit for 2"
    ;cin>>k;
    if(k==1) b2.withdraw();
    else b2.deposit();
    }
    if(m==3)
    {  long int k;
     cout<<"debit for 1 and credit for 2"
    ;cin>>k;
    if(k==1) b3.withdraw();
    else b3.deposit();
    }
    if(m==4) break;
    
    }
    
    b1.record();cout<<endl;
    b2.record();cout<<endl;
    b3.record();cout<<endl; 
 
    return 0;
}