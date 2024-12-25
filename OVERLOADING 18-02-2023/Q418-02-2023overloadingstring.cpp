#include<iostream>
using namespace std;

class mstring
{   private:
    char str[100];
   public:
   void take()
   {
    cin>>str;
   }
    mstring operator+(mstring b)
    {  mstring h; int p=0;int i=0;
       while(str[i]!='\0')
       {
        h.str[p]=str[i];cout<<h.str[p]<<endl;p++;
        ;i++;
       }i=0;
       while(b.str[i]!='\0')
       {
        h.str[p]=b.str[i];cout<<h.str[p]<<endl;p++;i++;
       }  
            return h;
    }
    void show()
    {   int i=0;
      while(str[i]!='\0')
       {
        cout<<str[i];
        i++;
       } cout<<endl;
    }
};

int main(){
mstring a,b,c;
a.take();b.take();
c=a+b;
a.show();b.show();
c.show();
return 0;
}