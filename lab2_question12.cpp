#include<iostream>
#include<cmath>
using namespace std;
int main()
{
  float p,t,r,ci;
  cout<<"Enter principal";
  cin>>p;
  cout<<"Enter rate";
  cin>>r;
  cout<<"Enter time";
  cin>>t;
  ci = p*pow((1+r/100),t)-p;
  cout<<"compound interest="<<ci;
  return 0;
}

