#include<iostream>
using namespace std;
int main()
{
  int a,b,d;
  cout<<"Enter 2 angles of a triangle";
  cin>>a;
  cin>>b;
  d = 180-(a+b);
  cout<<"third angle of the triangle is="<<d;
  return 0;
}
