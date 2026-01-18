 //input a number check positive, negative and zero
#include<iostream>
using namespace std;

int main()
{
  int n;
  cout<< " enter number: ";
  cin>>n;
  if(n == 0) {
    cout<< "zero";
  } 
  else if (n > 0) {
    cout<<" positive";
  } 
  else{
    cout << "negative";
  }
  return 0;
}
