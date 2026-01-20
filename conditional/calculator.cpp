//calculator
#include<iostream>
using namespace std;

int main()
{
int num1;
int num2;
char op;//operator
cout<<"enter first number:";
cin>>num1;
cout<<"Enter second number:";
cin>>num2;
cout<<"enter operator:";
cin>>op;

switch(op){
  case '+':
  cout<<num1+num2;
  break;
 case '-':
  cout<<num1-num2;
  break;
 case '*':
  cout<<num1*num2;
  break;
 case '/':
  cout<<num1/num2;
  break;
  default:
  cout<<"invalid operator";
 
}
return 0;
}
