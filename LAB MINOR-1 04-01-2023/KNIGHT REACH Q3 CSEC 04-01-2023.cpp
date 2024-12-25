#include<iostream>
using namespace std;

int knightreach(int a[8][8],int v[8][8],int sx,int sy,int dx,int dy,int i=0){
	static int p=0,min;

if(sx==dx && sy==dy){
  if(p==0){
  	 min=i;p++;}
else  if(i<min){
  		min=i;
	  }
	  return min;
}
else{v[sx][sy]=1;}
if(sx-2>=0 && sx-2<8 && sy+1>=0 && sy+1<8){
	knightreach(a,v,sx-2,sy+1,dx,dy,i+1);
}
if(sx-1>=0 && sx-1<8 && sy+2>=0 && sy+2<8){
	knightreach(a,v,sx-1,sy+2,dx,dy,i+1);
}
if(sx+2>=0 && sx+2<8 && sy+1>=0 && sy+1<8){
	knightreach(a,v,sx+2,sy+1,dx,dy,i+1);
}
if(sx+1>=0 && sx+1<8 && sy+2>=0 && sy+2<8){
	knightreach(a,v,sx+1,sy+2,dx,dy,i+1);
}
if(sx-2>=0 && sx-2<8 && sy-1>=0 && sy-1<8){
	knightreach(a,v,sx-2,sy-1,dx,dy,i+1);
}
if(sx-1>=0 && sx-1<8 && sy-2>=0 && sy-2<8){
	knightreach(a,v,sx-1,sy-2,dx,dy,i+1);
}
if(sx+1>=0 && sx+1<8 && sy-2>=0 && sy-2<8){
	knightreach(a,v,sx+1,sy-2,dx,dy,i+1);
}
if(sx+2>=0 && sx+2<8 && sy-1>=0 && sy-1<8){
	knightreach(a,v,sx+2,sy-1,dx,dy,i+1);
}
}

int main(){
int a[8][8];
int v[8][8];for(int i=0;i<8;i++){for(int j=0;j<8;j++){v[i][j]=0;}}
int sx,sy,dx,dy;
cin>>sx>>sy>>dx>>dy;
cout<<knightreach(a,v,sx,sy,dx,dy);
return 0;
}
