//input number check divisible by 3 
#include<iostream>
using namespace std;

int main()
{
  int n;
  cout<< "enter number: ";
  cin>>n;

  if( n % 3 == 0){
    cout<< "number is divisible by 3";
  }
  else if( n % 3 != 0){
    cout<< "number is not divisible by 3";
  }
  return 0;
}