#include<iostream>
using namespace std;
int main()
{
   int a,b,add,sub,multiply,div,rem;
   cout<<"Enter 2 integers";
   cin>>a;
   cin>>b;
   add = a+b;
   sub = a-b;
   multiply = a*b;
   div = a/b;
   rem = a%b;
    
   cout<<"sum="<<add;
   cout<<"subtract="<<sub;
   cout<<"multiplication="<<multiply;
   cout<<"divide="<<div;
   cout<<"remainder="<<rem;
} 
