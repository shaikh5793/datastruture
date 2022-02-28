#include<iostream>
using namespace std;
int jos(int  n,int  k)
{
   if(n==1)
     return 0;
   return ((jos(n-1,k)+k)%n);
}
int  my_jos(int n,int k)
{
  return jos(n,k)+1;
}

int  main()
{
  int  n = jos(7,3);
  cout<<n<<endl;
  return  1;
}