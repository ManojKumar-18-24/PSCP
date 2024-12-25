/* 
QUESTION::
#include<iostream> 
using namespace std; 
int Special( int w , int *x, int &y, int* &z) 
{ static int B[4];
 int t = z; 
 t = y ; 
 x = y + z ; 
 y = z + t ; 
 z = x + y ; 
 w = t + w; 
 cout << w <<" "<< x <<" "<< y <<" "<< z << endl; 
 B[0] = w ; B[1]= x ; B[2] =y ; B[3] = z; 
 return B; 
} 
int main() 
{ int A[]={5,6,7,8};                                 REQ OUTPUT: 33 14 28 28
 int *p=A;                                                       5  14 28 8
 p = Special( A[0], A[1] ,(A+2), p ) ;                           33 14 28 28
 for(int i=0;i<4;i++) 
 cout<<(A+i)<<" "; 
 cout<< endl; 
 for(int i=0;i<4;i++) 
 cout<<p[i]<<" "; 
 return 0; 
} 
*/

#include<iostream>
using namespace std;

int *special(int w,int *x,int &y,int *&z)
{
    static int b[4];
    int * &t=z;
    *t=y;
    *x=y+*z;
    y=*z+*t;
    *z=*x+y;
    w=*t+w;
    cout<<w<<" "<<*x<<" "<<" "<<y<<" "<<*z<<endl;
    b[0]=w;b[1]=*x;b[2]=y;b[3]=*z;
    return b;
}

int main(){
int A[]={5,6,7,8};
int *p=A;
p=special(A[0],&A[1],*(A+2),p);
for(int i=0;i<4;i++)cout<<*(A+i)<<" ";
cout<<endl;
for(int i=0;i<4;i++) cout<<p[i]<<" ";
return 0;
}