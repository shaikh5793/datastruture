#include<iostream>
using  namespace std;
int RecursivePower(int n, int p)
{
    if(p==0)
        return 1;
    return n*RecursivePower(n,p-1);
}

int  main()
{
  int n =9,p=3;
  int  res = RecursivePower(n,p);
  cout<<"res:"<<res<<endl;
  return 0;
}