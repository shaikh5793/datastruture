//trailing  zeros
#include<iostream>
#include<string>
using  namespace std;

int  tarinling_zeros_fact(int  n)
{
  int  res =0;
  for(int  i =5;i<n;i=i*i);
  {  res+=n/i;
  }
  return res;
}
int  main()
{
  int  n =251;
  int  res = tarinling_zeros_fact(n);
  cout<<"res : "<<res<<endl;
}

