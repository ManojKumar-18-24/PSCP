#include<iostream>
using namespace std;

int *readarray(){
static int b[1000],i=0;
   cin>>b[i];
   if(b[i]==-1){;
   }
   else{
   	i++;
   	readarray();
   }
}

int main(){  
  readarray();
	return 0;
}
