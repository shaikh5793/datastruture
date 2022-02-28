#include<iostream>
#incldue<string>
using namespace std;
int factorial_num(int  n)
{
  if((n==0)||(n==1))
    return 1;
  return  n*factorial_num(n-1);	
}
int main()
{
  int  n=5;
  int fact = factorial_num(n);
  cout<<"fact : "<<fact<<endl;
}