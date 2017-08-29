#include<iostream>
using namespace std;
int main()
{
  float pi=3.14;
  float r,dia,ar,circum;
  cout<<"Enter radius of circle";
  cin>>r;
  dia = 2*r;
  ar = pi*r*r;
  circum = 2*pi*r;
  cout<<"diameter="<<dia;
  cout<<"area="<<ar;
  cout<<"circumference="<<circum;
}

