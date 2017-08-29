#include<iostream>
using namespace std;
int main()
{
   float p,t,r,si;
   cout<<"Enter principal";
   cin>>p;
   cout<<"Enter rate";
   cin>>r;
   cout<<"Enter time";
   cin>>t;
   si = (p*t*r)/100;
   cout<<"simple interest="<<si;
   return 0;
}
