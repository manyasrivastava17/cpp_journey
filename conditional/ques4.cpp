//take 3 number input and tells if they can be the side of a triangle.
#include<iostream>
using namespace std;

int main()
{
  int a,b,c;
  cout<<"Enter side of trianglr a, b, c:";
  cin>> a >> b >> c;

  if((a+b>c) && (b+c>a) && (c+a>b)){
    cout<< "triangle is valid";
  }
  else{
    cout<< "triangle is not valid";
  }

  return 0;
}