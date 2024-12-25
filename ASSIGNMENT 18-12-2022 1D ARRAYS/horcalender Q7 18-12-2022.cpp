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
int q=maxdays/days;/*
for(int i=1;i<=patternnum;i++){
    int f=0;
    if(i==1){
        for( int j=1;j<startday;j++){
            cout<<" ";
        }
    }
   if(i>1){ for(int j=1;j<=(maxdays-c);j++){
        cout<<" ";
    }}
    for(int j=1;j<=maxdays;j++){
        cout<<j;
        if(i==1 && (j+startday-1)%days==0){
               f++;
      if(f==q){c=j;}
            cout<<endl;
        }
        if(i>1 && (j+maxdays-c)%days==0){
          f++;
      if(f==q && (j+maxdays-c)<=(maxdays%days)){c=j;}
        if(f==q+1 &&  (j+maxdays-c)>(maxdays%days)){c=j;}
         cout<<endl;}

    }cout<<endl;
    cout<<"--------------"<<endl;
}*/
for(int i=1;i<=patternnum;i++){
    if(i==1){
        for(int j=1;j<startday;j++){
            cout<<"   ";
        }
        for(int j=1;j<=maxdays;j++){
            if(j<10)
            {cout<<" "<<j<<" ";}
            if(j>=10){
                cout<<j<<" ";
            }
            if((j+startday-1)%days==0){
                c=j;
                cout<<endl;
            }
        }
    }
    else{ 
        int r=0;
        for(int k=1;k<=maxdays-c;k++){
            cout<<"   ";
        }
       if(r==0){ p=maxdays-c;
       r++;}
        for(int j=1;j<=maxdays;j++){
            if(j<10)
            {cout<<" "<<j<<" ";}
            if(j>=10){
                cout<<j<<" ";
            }
            if((j+p)%days==0){
                cout<<endl;
              c=j;
            }
        }
    }cout<<endl;
    cout<<"---------------"<<endl;
}
return 0;
}