#include<iostream>
using  namespace std;
int getsum(int  n)
{
   if(n==0)
    return  0;
   return n+getsum(n-1);	
}
int main()
{
   int sum =0,n=10;
   sum = getsum(n);
   cout<<sum<<endl;
   return  1;
}