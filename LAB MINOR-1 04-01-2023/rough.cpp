/*#include<iostream>
using namespace std;


int givensumpath(int a[][5],int n,int key,int i=0,int j=0,int sum=0,int l=0){
	static int b[100];int r=0;static int p=0;
if(i==n-1 && j==4){
	b[l]=a[i][j];
	sum+=a[n-1][j];
}
if(j<4){ r++;
    b[l]=a[i][j];
    sum+=a[i][j];
   givensumpath(a,n,key,i,j+1,sum,l+1);
}
if(i<n-1){b[l]=a[i][j];
 if(r==0){sum+=a[i][j];}
 givensumpath(a,n,key,i+1,j,sum,l+1);
}
if(sum==key && i==n-1 && j==4){
    p++;
for(int k=0;k<=l;k++){
	cout<<b[k]<<" ";
}cout<<endl;
}
return p;
}

int main(){
int r;
cin>>r;
int a[5][5];
for(int i=0;i<r;i++){
    for(int j=0;j<5;j++){
        cout<<"a["<<i<<"]["<<j<<"] = ";
        cin>>a[i][j];
    }
}
int key;
cout<<"sum =";
cin>>key;
int y=givensumpath(a,r,key);
cout<<"no.of paths="<<y;
return 0;
}
#include<iostream>
using namespace std;
int knightreach(int A[8][8],int V[8][8],int sx,int sy,int dx,int dy,int i)
{   static int j=0,min;
    if(sx==dx && sy==dy)
    {
        if(j==0)
        {
            min=i;
            j++;
        }
        else if(i<min)
        {
            min=i;
        }
        return min;
    }
    if(sx-2>=0 && sx-2<8 && sy-1>=0 && sy-1<8 && V[sx-2][sy-1]==0)
    {
        V[sx-2][sy-1]=1;
        knightreach( A, V, sx-2,sy-1, dx, dy,i+1);
    }
    
    if(sx-2>=0 && sx-2<8 && sy+1>=0 && sy+1<8 && V[sx-2][sy+1]==0)
    {
        V[sx-2][sy+1]=1;
        knightreach( A, V, sx-2,sy+1, dx, dy,i+1);
    }
    
    if(sx+1>=0 && sx+1<8 && sy-2>=0 && sy-2<8 && V[sx+1][sy-2]==0)
    {
        V[sx+1][sy-2]=1;
        knightreach(A, V, sx+1,sy-2,dx,dy,i+1);
    }
    
    if(sx-1>=0 && sx-1<8 && sy-2>=0 && sy-2<8 && V[sx-1][sy-2]==0)
    {
        V[sx-1][sy-2]=1;
        knightreach( A, V, sx-1, sy-2, dx, dy,i+1);
    }
    
    if(sx+1>=0 && sx+1<8 && sy+2>=0 && sy+2<8 && V[sx+1][sy+2]==0)
    {
        V[sx+1][sy+2]=1;
        knightreach( A, V, sx+1, sy+2, dx, dy,i+1);
    }
    
    if(sx-1>=0 && sx-1<8 && sy+2>=0 && sy+2<8 && V[sx-1][sy+2]==0)
    {
        V[sx-1][sy+2]=1;
        knightreach( A, V, sx-1, sy+2, dx, dy,i+1);
    }
    
    if(sx+2>=0 && sx+2<8 && sy-1>=0 && sy-1<8 && V[sx+2][sy-1]==0)
    {
        V[sx+2][sy-1]=1;
        knightreach( A, V, sx+1, sy+2, dx, dy,i+1);
    }
    
       
    if(sx+2>=0 && sx+2<8 && sy+1>=0 && sy+1<8 && V[sx+2][sy+1]==0)
    {
        V[sx+2][sy+1]=1;
        knightreach( A, V, sx+2, sy-1, dx, dy,i+1);
    }
    
}
int main()
{
    int A[8][8];
    int V[8][8];
    int sx,sy,dx,dy;
    cin>>sx>>sy>>dx>>dy;
    for(int i=0;i<64;i++)
    {
        for(int j=0;j<64;j++)
        {
            V[i][j]=0;
        }
    }
    cout<<knightreach(A,V,sx,sy,dx,dy,0);
}*/
/*#include<iostream>
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
}*/
#include<iostream>
using namespace std;

struct poly
{
	int coeff;
	int expo;
};

int  readpoly(poly p[10])
{
	for(int i=0;i<10;i++)
	{
		cin>>p[i].coeff;
		cin>>p[i].expo;
	}

    return 0;
}

int main(){
   poly p1[10],p2[10],p3[10];
    int h=readpoly(p1);
     
return 0;
}
