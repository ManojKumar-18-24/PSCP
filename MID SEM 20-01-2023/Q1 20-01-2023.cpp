#include<iostream>
using namespace std;

int main(){
	cout<<"   ";
	for(int i=0;i<5;i++){
		if(i==0){
		cout<<"S M T W T F S ";}
	else if(i==1){
			cout<<"S M T  W  T  F  S  ";	
		}
		else{
				cout<<"S  M  T  W  T  F  S  ";	
		}
	} cout<<endl;
	int maxdays,p=0;
	for(int i=1;i<=12;i++){ int g;
	if(i>1){g=maxdays%7;}	
	switch(i){
	case 1:cout<<"Jan";maxdays=31;
	break;	
	case 2:cout<<"Feb";maxdays=28;
	break;		
	case 3:cout<<"Mar";maxdays=31;
	break;
	case 4:cout<<"Apr";maxdays=30;
	break;	
	case 5:cout<<"May";maxdays=31;
	break;	
	case 6:cout<<"Jun";maxdays=30;
	break;		
	case 7:cout<<"Jul";maxdays=31;
	break;
	case 8:cout<<"Aug";maxdays=31;
	break;		
	case 9:cout<<"Sep";maxdays=30;
	break;
	case 10:cout<<"Oct";maxdays=31;
	break;
	case 11:cout<<"Nov";maxdays=30;
	break;
	case 12:cout<<"Dec";maxdays=31;
	break;		
	}	
		
if(i==1){
	for(int j=1;j<=31;j++){
		cout<<j<<" ";
	}cout<<endl;
}		
else{
	p+=g;
	for(int j=1;j<=(p%7);j++){
		cout<<"  ";
	}
	for(int j=1;j<=maxdays;j++){
		cout<<j<<" ";

	}cout<<endl;
}		
	}
	return 0;
}
