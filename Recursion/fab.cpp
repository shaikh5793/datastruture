#include<iostream>
using  namespace  std;
int fab(int  n)
{
  if(n<=1)
    return  n;
  return  fab(n-1)+fab(n-2);
}
int main()
{
  int n=10;
  fab(n);
  return  1;
}