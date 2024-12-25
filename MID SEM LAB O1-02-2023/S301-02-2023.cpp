#include<iostream>
#include<string>
using namespace std;

void function(string a)
{     static int p=0,t=1;
    if(t==(a.length())/2+1){;}
    else if(p==t)
    {    for(int i=0;i<p;i++){cout<<a[i];}cout<<endl;
        p=0;t++;
        function(a); 
    }
    else  if(a[p]==a[a.length()-t+p])
     {
        p++;
        function(a);
     }
     else{
        p=0;t++;function(a);
     }
}

int main(){
string str;
getline(cin,str);
function(str);
return 0;
}