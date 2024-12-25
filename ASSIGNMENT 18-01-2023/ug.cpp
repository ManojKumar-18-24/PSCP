/*#include<iostream>
using namespace std;

void knightreach(int a[8][8],int v[8][8],int sx,int sy,int dx,int dy,int i=0){
	static int p=0,min;
if(sx!=dx || sy!=dy){v[sx][sy]=1;}
if(sx==dx && sy==dy){
  /*if(p==0){
  	 min=i;cout<<p<<" "<<min<<endl;p++;
	 for(int i=0;i<8;i++){
	for(int j=0;j<8;j++){
		cout<<v[i][j]<<" ";
	}cout<<endl;
}}
  if(i<=min){
  		min=i;cout<<p<<" "<<min<<endl;
	  }p++;
	  cout<<i<<endl;	
}
else{
if(sx-2>=0 && sx-2<8 && sy+1>=0 && sy+1<8 && v[sx-2][sy+1]==0){
	knightreach(a,v,sx-2,sy+1,dx,dy,i+1);
}
if(sx-1>=0 && sx-1<8 && sy+2>=0 && sy+2<8&& v[sx-1][sy+2]==0){
	knightreach(a,v,sx-1,sy+2,dx,dy,i+1);
}
if(sx+2>=0 && sx+2<8 && sy+1>=0 && sy+1<8&& v[sx+2][sy+1]==0){
	knightreach(a,v,sx+2,sy+1,dx,dy,i+1);
}
if(sx+1>=0 && sx+1<8 && sy+2>=0 && sy+2<8&& v[sx+1][sy+2]==0){
	knightreach(a,v,sx+1,sy+2,dx,dy,i+1);
}
if(sx-2>=0 && sx-2<8 && sy-1>=0 && sy-1<8&& v[sx-2][sy-1]==0){
	knightreach(a,v,sx-2,sy-1,dx,dy,i+1);
}
if(sx-1>=0 && sx-1<8 && sy-2>=0 && sy-2<8&& v[sx-1][sy-2]==0){
	knightreach(a,v,sx-1,sy-2,dx,dy,i+1);
}
if(sx+1>=0 && sx+1<8 && sy-2>=0 && sy-2<8&& v[sx+1][sy-2]==0){
	knightreach(a,v,sx+1,sy-2,dx,dy,i+1);
}
if(sx+2>=0 && sx+2<8 && sy-1>=0 && sy-1<8&& v[sx+2][sy-1]==0){
	knightreach(a,v,sx+2,sy-1,dx,dy,i+1);
}
}
}

int main(){
int a[8][8];int v[8][8]={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
/*for(int i=0;i<8;i++){
	for(int j=0;j<8;j++){
		v[i][j]=0;
	}
}
int sx=7,sy=0,dx=0,dy=7;
//cin>>sx>>sy>>dx>>dy;
knightreach(a,v,sx,sy,dx,dy);
return 0;
}*/
#include<iostream>
#include<string>
using namespace std;

void check(string a[],int v[],int n,int i=0,int j=1){
static int p=0,t=0;
	
if(i==n){
	cout<<"they can't be chained";
}	
else if(p==n-1){
	cout<<"they can be chained";
}		
else if(j==n){  p=0;t++;
for(int i=0;i<n;i++){
	v[i]=0;
}
check(a,v,n,t,0);
}
else if(a[i][a[i].length()-1]==a[j][0] && v[j]==0){
		v[i]=1;v[j]=1;p++;
		check(a,v,n,j,0);
}
else{
	check(a,v,n,i,j+1);
}	
		
}

int main(){
	int n;
	cout<<"no.of words u want to enter: ";
	cin>>n;
string a[n];int v[n];
for(int i=0;i<n;i++){
	cin>>a[i];
}
for(int i=0;i<n;i++){
	v[i]=0;
}
check(a,v,n);
return 0;
}