// calculate volume of sphere
#include<iostream>
#include<cmath>
using namespace std;

int main()
{
  float radius;
  float volume;
  const double pi=3.14;

  cout<<"enter radius of sphere: ";
  cin>> radius;

  volume=(4/3)*(pi* pow(radius,3));
  cout<<"volume of sphere= "<<volume;

  return 0;
}



