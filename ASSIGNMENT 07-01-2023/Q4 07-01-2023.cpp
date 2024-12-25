#include<iostream>
#include<cstring>
#include<string>
#include<algorithm>
using namespace std;

void remove(string s,int y,int i=1,int j=0){

static int p=0,u=0;
if(i==y-u){
 cout<<s;
}
else if(i==j){
    if(p>0){
      u++;
  s.erase(i,1);
  p=0;
   remove(s,y,i,0);
    }
    else{
      //cout<<s[i];
          p=0;
  remove(s,y,i+1,0);
    }

}
else if(s[i]==s[j]){
  p++;
  remove(s,y,i,j+1);
}
else{
    remove(s,y,i,j+1);
}

}

int main(){

string s;

getline(cin,s);
int y=s.length();

remove(s,y);

return 0;
}