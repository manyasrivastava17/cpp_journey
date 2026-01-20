// take three positive  integers input and print the greatest of them
#include<iostream>
using namespace std;

int main ()
{
  int a, b ,c;
  cout<<" Enter first number:";
  cin>>a;
  cout<<" Enter second number:";
  cin>>b;
  cout<<" Enter third number:";
  cin>>c;
  if(a>b){
    if(a>c){
      cout<<"a is greatest";
    }
    else {//c>a
      cout<<"c is greatest";
    }

  }
  else{//b>a
    if(b>c){
      cout<<"b is greatest";
    }
    else {//c>b
      cout<<"c is greatest";
    }

  }
  return 0;
}