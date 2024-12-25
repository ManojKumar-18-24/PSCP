#include<iostream>
using namespace std;


void backtracking(int a[8][8],int i=0,int j=0)
{  if(j==8){cout<<"lk\n";for(int w=0;w<8;w++){{for(int l=0;l<8;l++){cout<<a[i][j]<<" ";} cout<<endl; }}}
   else{   
    i=0;
    if(1)
	{ int r=0;
      int h=i+j;
      int k=i-j;
      for(int e=0;e<8;e++) {if(a[i][e]==1){r++;}}
	  for(int w=0;w<8;w++){{for(int l=0;l<8;l++){if( (a[i][j]==1) && (w+l==h || w-l==k) ){r++;}	  } }
       if(r==0){a[i][j]=1;backtracking(a,0,j+1);cout<<a[i][j]<<" "<<i<<" "<<j<<" "<<h<<" "<<k<<endl;} 
	}  }i++;
	if(1)
	{ int r=0;
      int h=i+j;
      int k=i-j;
      for(int e=0;e<8;e++) {if(a[i][e]==1){r++;}}
	  for(int w=0;w<8;w++){{for(int l=0;l<8;l++){if( (a[i][j]==1) && (w+l==h || w-l==k) ){r++;}	  } }
       if(r==0){a[i][j]=1;backtracking(a,0,j+1);cout<<a[i][j]<<" "<<i<<" "<<j<<" "<<h<<" "<<k<<endl;} 
	}  }i++;
	if(2)
	{ int r=0;
      int h=i+j;
      int k=i-j;
      for(int e=0;e<8;e++) {if(a[i][e]==1){r++;}}
	  for(int w=0;w<8;w++){{for(int l=0;l<8;l++){if( (a[i][j]==1) && (w+l==h || w-l==k) ){r++;}	  } }
       if(r==0){a[i][j]=1;backtracking(a,0,j+1);cout<<a[i][j]<<" "<<i<<" "<<j<<" "<<h<<" "<<k<<endl;} 
	} }  i++;
	if(3)
	{ int r=0;
      int h=i+j;
      int k=i-j;
      for(int e=0;e<8;e++) {if(a[i][e]==1){r++;}}
	  for(int w=0;w<8;w++){{for(int l=0;l<8;l++){if( (a[i][j]==1) && (w+l==h || w-l==k) ){r++;}	  } }
       if(r==0){a[i][j]=1;backtracking(a,0,j+1);cout<<a[i][j]<<" "<<i<<" "<<j<<" "<<h<<" "<<k<<endl;} 
	}} i++;
	if(4)
	{ int r=0;
      int h=i+j;
      int k=i-j;
      for(int e=0;e<8;e++) {if(a[i][e]==1){r++;}}
	  for(int w=0;w<8;w++){{for(int l=0;l<8;l++){if( (a[i][j]==1) && (w+l==h || w-l==k) ){r++;}	  } }
       if(r==0){a[i][j]=1;backtracking(a,0,j+1);cout<<a[i][j]<<" "<<i<<" "<<j<<" "<<h<<" "<<k<<endl;} 
	} } i++;
	if(5)
	{ int r=0;
      int h=i+j;
      int k=i-j;
      for(int e=0;e<8;e++) {if(a[i][e]==1){r++;}}
	  for(int w=0;w<8;w++){{for(int l=0;l<8;l++){if( (a[i][j]==1) && (w+l==h || w-l==k) ){r++;}	  } }
       if(r==0){a[i][j]=1;backtracking(a,0,j+1);cout<<a[i][j]<<" "<<i<<" "<<j<<" "<<h<<" "<<k<<endl;} 
	} } i++;
	if(6)
	{ int r=0;
      int h=i+j;
      int k=i-j;
      for(int e=0;e<8;e++) {if(a[i][e]==1){r++;}}
	  for(int w=0;w<8;w++){{for(int l=0;l<8;l++){if( (a[i][j]==1) && (w+l==h || w-l==k) ){r++;}	  } }
       if(r==0){a[i][j]=1;backtracking(a,0,j+1);cout<<a[i][j]<<" "<<i<<" "<<j<<" "<<h<<" "<<k<<endl;} 
	}}   i++;
	if(7)
	{ int r=0;
      int h=i+j;
      int k=i-j;
      for(int e=0;e<8;e++) {if(a[i][e]==1){r++;}}
	  for(int w=0;w<8;w++){{for(int l=0;l<8;l++){if( (a[i][j]==1) && (w+l==h || w-l==k) ){r++;}	  } }
       if(r==0){a[i][j]=1;backtracking(a,0,j+1);cout<<a[i][j]<<" "<<i<<" "<<j<<" "<<h<<" "<<k<<endl;} 
	}}	
}
		
}

int main(){
int a[8][8];
for(int i=0;i<8;i++)
{
	for(int j=0;j<8;j++)
	{
		a[i][j]=0;
	}
}
backtracking(a);
return 0;
}

