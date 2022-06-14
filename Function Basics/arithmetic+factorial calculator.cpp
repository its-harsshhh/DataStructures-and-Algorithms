#include<iostream>
using namespace std;

int add(int n1,int n2)
{
    int sum=n1+n2;                              //add_function 
    return sum;
}


int subtract(int n3,int n4)
{
    int sub=n3-n4;                              //subtract_function 
    return sub;
}


int multiply(int n5,int n6)
{
    int mul=n5*n6;                              //multiply_function 
    return mul;
}


int divide(int n7,int n8)
{
    int div=n7/n8;                              //divide_function 
    return div;
}

int factorial(int x)
{ int fac=1;
  for(int i=x;i>=1;i--)
  {                                             //factorial_function
    fac=fac*i;
  }
  return fac;
}




int main()
{
int a,b,c;
  cout<<"enter two numbers"<<endl;
  cin>>a>>b;

  cout<<"enter factorial number"<<endl;
  cin>>c;

  cout<<"Add "<<add(a,b)<<endl;
  cout<<"subtract "<<subtract(a,b)<<endl;
  cout<<"multiply "<<multiply(a,b)<<endl;
  cout<<"divide "<<divide(a,b)<<endl;
  cout<<"factorial "<<factorial(c)<<endl;

    return 0;
}