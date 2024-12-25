#include<iostream>
using namespace std;

int main() { 
    char op; 
    cout<<"operator: ";
    cin>>op;
     int num1;
     cout<<"num1= ";
     cin>>num1;
     int num2;
     cout<<"num2= ";
     cin>>num2;

     switch(op) {

        case '+':
        cout<<num1 + num2<<endl;
        break;
        case '-':
        cout<<num1-num2<<endl;
        break;
        case '*':
        cout<<num1*num2<<endl;
        break;
        case '/':
        cout<<num1/num2<<endl;
        break;
     }
    return 0;
}