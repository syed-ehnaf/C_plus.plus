#include <iostream>
using namespace std;
int main()
{
   float  a,b;
   float d,e;
   cout<<"ENter any two number "<<endl;
   cin>>a>>b;
   char op;
   cout<<"Enter Operation (+,-,*,/)"<<endl;
   cin>>op;
   if (op=='+')
	  cout<<"Addision of two number is = " <<a+b<<endl;
   else if (op=='-')
	  cout<<"Subtraction of two number is = " <<a-b<<endl;
   else if (op=='*')
	  cout<<"Multiplicatio of two number is = " <<a*b<<endl;
   else if (op=='/')
	  cout<<"Division of two number is = " <<a/b<<endl;
   
   else
      cout<<"wrong operator"; 
      
   return 0;

;}

