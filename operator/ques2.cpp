//calculate simpleinteest 
 #include<iostream>
#include<iostream>
using namespace std;

int main()
{
  float p,r,t;
  float si;

  cout<<"enter principal ,rate, time to calculate simple interest: ";
  cin>> p >> r >> t ;
  si=(p * r * t)/100;

  cout<<"simple Interest= " <<si;
  
  return 0;
}