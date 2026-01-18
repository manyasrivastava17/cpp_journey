#include<iostream>
#include<cmath>
using namespace std;

int main(){
  float radius;
  cout<<"enter the radius of circle: ";
  cin>>radius;
  const double pi= 3.14;
  cout<<"area of circle: ";
  cout<<pi*pow(radius, 2);

  return 0;
  
  }
