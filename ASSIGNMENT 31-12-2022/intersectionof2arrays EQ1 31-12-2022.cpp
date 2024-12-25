#include<iostream>
using namespace std;

void intersection(int a[],int b[],int n1,int n2,int i,int w=0,int j=0){
    static int c[100],p=0,m=0;
if(i==n1){
    if(p==0){cout<<"disjoint";}
   else{ cout<<"intersection={ ";
    for(int i=0;i<p;i++){
        cout<<c[i]<<",";
    }
    cout<<" }";}
}    
else if(w==n2){m=0;
             intersection(a,b,n1,n2,i+1,0,0);
    }
else if(j==i && i!=0){
    if(m==0){
        if(a[i]==b[w]){
            c[p]=a[i];
            p++;  m=0;
            intersection(a,b,n1,n2,i+1,0,0);
        }
        else{
           intersection(a,b,n1,n2,i,w+1,j);  
        }
    }
    else{  m=0;
           intersection(a,b,n1,n2,i+1,0,0);  
    }
}
else if(i>0){
       if(a[i]==a[j]){
          m++;
       }
       intersection(a,b,n1,n2,i,0,j+1);
}
else{
    if(a[i]==b[w]){
        c[p]=a[i];
        p++; m=0;
         intersection(a,b,n1,n2,i+1,0,0);
    }
    else{
         intersection(a,b,n1,n2,i,w+1,0);
    }
}

}

int main(){
int n1,n2;
cout<<"size of a: ";
cin>>n1;
int a[n1];
for(int i=0;i<n1;i++){
    cout<<"a["<<i<<"] = ";
    cin>>a[i];
}
cout<<"size of b: ";
cin>>n2;
int b[n2];
for(int i=0;i<n2;i++){
    cout<<"b["<<i<<"] = ";
    cin>>b[i];
}
intersection(a,b,n1,n2,0);
return 0;
}