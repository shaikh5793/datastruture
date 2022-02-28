#include<iostream>
using  namespace  std;
int count_digits(int  n)
{
  if(n<10)
   return  1;
  return  1+count_digits(n/10);  
}
int main()
{
  int  n = 99999;
  int  res = count_digits(n);
  cout<<"res"<<res<<endl;
  return  1;
}