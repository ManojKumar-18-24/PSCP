#include<iostream>
using namespace std;


class matrix
{  private:
  int r,c;
  int a[100][100];
  public:
  matrix(void);
  
   void show()
   {
    cout<<r<<endl;
    cout<<c<<endl;
     for(int i=0;i<r;i++)
     {
         for(int j=0;j<c;j++)
          {
              cout<<a[i][j]<<" ";
          } cout<<endl;
     }
   }
   void add(matrix &b )
   {  matrix s;
    if(r==b.r && c==b.c)
      {  s.r=r;s.c=c;
                for(int i=0;i<r;i++)
                  {
                    for(int j=0;j<c;j++)
                     {
                        s.a[i][j]=a[i][j]+b.a[i][j];
                     } 
                  }
      }
    else
    {   
      cout<<"add ni hothe"<<endl;
    }
   }
     void multiply(matrix &b )
   {  matrix s;
    if(c==b.r)
      {  s.r=r;s.c=b.c;
               
      }
    else
    {   
      cout<<"mul ni hothe"<<endl;
    }
   } 
};

matrix:: matrix(void)
{   
  cout<<"enter r & c"<<endl;
  cin>>r>>c;
  for(int i=0;i<r;i++)
  {
    for(int j=0;j<c;j++)
    {
      cin>>a[i][j];
    }
  }
}
int main(){
matrix d;
d.show();
return 0;
}
