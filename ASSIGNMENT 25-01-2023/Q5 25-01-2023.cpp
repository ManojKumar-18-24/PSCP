#include<iostream>
#include<string>
using namespace std;

void selfish(string s,string str1,int u){
static int p=0,i=0;
if(i<u && p<3)
   {
	     if(s[i]==str1[p])
	    {
		p++;i=0;
		selfish( s, str1, u);
	    }
	    else
		{
		i++;
		selfish( s, str1, u);
	    }
   }	
else{
	if(p==3)
	{
		cout<<"1"<<" ";
		p=0;
	}
	else if(i==u)
	{p=0;
	cout<<"0 ";	
	}
}	

}

int main(){
string str1="elf";
string a[5];
for(int i=0;i<5;i++){
	cin>>a[i];
}
for(int i=0;i<5;i++){
   	selfish(a[i], str1,a[i].length());
}
return 0;
}


