#include<iostream>
using namespace  std;
int max_rop_cut(int  n,int a,int b,int c)
{
  if(n==0)
    return 0;
  if(n<=-1)
    return  0;
  int  res = max(max_rop_cut(n-a,a,b,c),max(max_rop_cut(n-b,a,b,c),max_rop_cut(n-c,a,b,c)));
  if(res == -1)
    return  -1;
  return res+1;  
}
int  main()
{
  int  res ,a=2,b=1,c=5,n=5;
  cout<<max_count(n,a,b,c);
  return  1;
}