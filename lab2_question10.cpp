#include<iostream>
using namespace std;
int main()
{
  int a,b,d,e,f;float total,avg,percent;
  cout<<"Enter marks in maths";
  cin>>a;
  cout<<"Enter marks in physics";
  cin>>b;
  cout<<"Enter marks in chemistry";
  cin>>d;
  cout<<"Enter marks in biology";
  cin>>e;
  cout<<"Enter marks in computer";
  cin>>f;
  total = a+b+d+e+f;
  avg = total/5;
  percent = (total/500)*100;
  cout<<"Total marks="<<total;
  cout<<"Average marks="<<avg;
  cout<<"percentage="<<percent;
  return 0;
}
