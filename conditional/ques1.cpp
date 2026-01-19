//take positive integer input and tell if it is even or odd
#include<iostream>
using namespace std;

int main()
{
  int n;
  cout<<"Enter a number: ";
  cin>>n;

  if(n % 2 == 0){
    cout<< "even";
  }
  else{
    cout<< "odd";
  }
  return 0;
}