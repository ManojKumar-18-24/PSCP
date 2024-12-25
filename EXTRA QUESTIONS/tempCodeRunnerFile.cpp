   #include<iostream>1
   using namespace std;


   void binary(int n)
   {  static int sum=0;
      if(n==0){;}
      else{
        sum=n%2+(binary(n/2))*10; 
      }
   }
   
   int main(){
   int n;
   cin>>n;
   binary(n);
   return 0;
   }