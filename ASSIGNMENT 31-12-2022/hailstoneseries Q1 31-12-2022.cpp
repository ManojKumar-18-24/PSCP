#include<iostream>
using namespace std;

int hail(int n){
    if(n==1){
        cout<<endl;
        return 1;
    }
    else{
        if(n%2==0){n/=2;
            cout<<n<<" ";}
        else{
            n*=3;
            n+=1;
            cout<<n<<" ";
        }  
        return(1+hail(n)); 
    }
}
int main(){
int n;
cin>>n;
cout<<n<<" ";
cout<<hail(n);
return 0;
}