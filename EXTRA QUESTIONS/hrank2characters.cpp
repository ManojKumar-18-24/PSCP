#include<iostream>
using namespace std;

int alternate(string s) {
    
  string a;int t=0,min=0;
  
  for(int i=0;i<s.length()-1;i++)
     {     a=s;
          char c[2];c[0]=s[i];
      for(int j=i+1;j<s.length();j++)
      {   c[1]=s[j];
         cout<<"c[1]= "<<c[1]<<" c[2]="<<c[2]<<" ";
         if(c[1]!=c[0]){ 
          int k=0;int z=a.length();int g=0;
          while(k<z-g)
          {
              if(a[k]!=c[0] && a[k]!=c[1]){a.erase(k,1);g++;}
              else k++;
          }k=0;int r=0;
          while(k<a.length())
          {
              if(k%2==0){if(a[k]!=a[0]){r++;}}
            if(k%2!=0){if(a[k]!=a[1]){r++;}}k++;
          }
          if(r==0){ cout<<a<<endl;   if(t==0){min=a.length();t++;}
                     else if(a.length()>min){min=a.length();}}
          
      } }
  }
  return min;
  
}

int main(){
string s;
cin>>s;
cout<<alternate(s);
return 0;
}