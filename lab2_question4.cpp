#include<iostream>
using namespace std;
int main()
{
  int y,d,w;
  cout<<"Enter no days";
  cin>>d;
  y = d/365;
  d = d%365;
  w = d/7;
  d = d%7;
  cout<<"years="<<y;
  cout<<"weeks="<<w;
  cout<<"days="<<d;
  return 0;
}



  
