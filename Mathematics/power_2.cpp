#include<iostream>
using  namespace std;
int power(int  n,int  x)
{
  int res =1;
  while(n>0)
  {
   if(n&1)
    res =res *x;	
   x=x*x;
   n=n>>1; 
  }  
  return  res;
}
int main()
{
  int  n =3,p=4;
  int res = power(3,4);
  cout<<"res:"<<res<,endl;
}