#include<iostream>
using namespace std;

void  sieve(int n)
{
   if(n <= 1)
     return;
   bool issieve[n+1];
   fill(issieve , issieve+n+1,true;
   for(int i=2;i*i<=n;i++)
   {
      if(issieve[i])
	  {
	     for(int  j=2*i;j<=n;j=j+i)
		  issieve[j] =false;
	  }
   
   }
   for(int i=2;i<n;i++)
    if(issieve[i])
	  cout<<"i: "<<i<<endl;
}
int  main()
{
  int  n=7;
  sieve(n);
}