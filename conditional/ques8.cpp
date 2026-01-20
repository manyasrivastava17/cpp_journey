//take input percentage of a student and print the grade according to marks
#include<iostream>
using namespace std;

int main()
{
  int p;
  cout<<" Enter percentage of student:";
  cin>>p;

  if(p>=81 & p<=100){
    cout<<"very good";
  }
  else if(p>=61){
    cout<<"good";
  }
  else if(p>=41){
    cout<<"average";
  }
  else{
    cout<<"fail";
  }
  return 0;
}