#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main(){
    int num1,num2;
    cout<<"Enter first number: ";
    cin>>num1;
        cout<<"Enter second number: ";
    cin>>num2;
    char op;
    cout<<"Enter Operation: ";
    cin>>op;
    switch(op){
        case '+':
        cout<<num1<<" + "<<num2<<" = "<<num1+num2<<endl;
        break;
        case '-':
        cout<<num1<<" - "<<num2<<" = "<<num1-num2<<endl;
        break;
        case '*':
        cout<<num1<<" * "<<num2<<" = "<<num1*num2<<endl;
        break;
        case '/':
        cout<<num1<<" / "<<num2<<" = "<<num1/num2<<endl;
        break;
        default:
        cout<<"Error! Operation not found!"<<endl;
    }
    return 0;
}