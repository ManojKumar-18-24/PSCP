#include<iostream>
using namespace std;

int main(){
int days,startday,maxdays,patternnum,c,p;
cout<<"enter days per week: ";
cin>>days;
cout<<"enter starting date of the year: ";
cin>>startday;
cout<<"enter days per month: ";
cin>>maxdays;
cout<<"enter no.of months: ";
cin>>patternnum;
int q=maxdays/days;
for(int i=1;i<=patternnum;i++){
    if(i==1){
        for(int j=1;j<startday;j++){
            cout<<"   ";
            int p=days-startday+j+1;
            while(p<=maxdays){
                if(j<10){cout<<" "<<p<<" ";}
                else{cout<<p<<" ";}
                p+=days;
            }
            cout<<endl;
        }
        for(int j=1;j<=days-startday+1;j++){
            p=j;
            while(p<=maxdays){
                if(j<10){cout<<" "<<p<<" ";}
                else{cout<<p<<" ";}
                p+=days;
            }
            cout<<endl;
        }
    }
    if(i>1){
        int t=p;
        
        for(int j=1;j<=(days-(t-maxdays));j++){
            cout<<"   ";
            p=(t-maxdays+j);
            while(p<=maxdays){
                if(j<10){cout<<" "<<p<<" ";}
                else{cout<<p<<" ";}
                p+=days;
            }
           cout<<endl; 
        }
        for(int j=1;j<=(t-maxdays);j++){
            p=j;
            while(p<=maxdays){
               if(j<10){cout<<" "<<p<<" ";}
                else{cout<<p<<" ";}
                p+=days;
            }
            cout<<endl;
        }
    }
    cout<<"--------"<<endl;;
}
return 0;
}