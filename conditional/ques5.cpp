//take 3 poitive integers input and print  the greatest of them
#include<iostream>
using namespace std;

int main()
{
  int a , b, c;
  cout<<" Enter  the value of integers: ";
  cin>> a >> b >> c;
  if(a>b & a>c){
    cout<<a;
  }
  else if (b>a && b>c){
    cout<<b;
  }
  else{
    cout<<c;
  }
}