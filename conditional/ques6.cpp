//Take positive integer input and tell if it is divisible by 5 or 3 but not divible by 15
#include<iostream>
using namespace std;

int main()
{
  int n;
  cout << "Enter a integer:";
  cin >> n;

  if((n % 5 == 0 || n % 3==0) && (n % 15 != 0)){
    cout<< " number is divible  by 3 and 5 but not 15 ";
  }
  return 0;
}