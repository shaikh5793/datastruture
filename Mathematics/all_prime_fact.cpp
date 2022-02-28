//trailing  zeros
#include<iostream>
#include<string>
using  namespace std;

void  prime_2(int  n)
{
  if((n<=1))
   return;
  while(n%2 == 0)
  {
    cout<<n%2<<endl;
    n=n/2;
  }
   while(n%3 == 0)
  {
    cout<<n%3<<endl;
    n=n/2;
  }
  for(int i=5;i*i<n;i+=6)
  {
     while(n%i == 0)
	 {
	    cout<<n%i<<endl;
	    n=n/i;
	 }
	 while(n%(i+2) == 0)
	 {
	    cout<<n%(i+2)<<endl;
	    n=n/(i+2);
	 }
  }	 
  if(n > 3)
		cout<<n<<" ";

}

int  main()
{
  int  n =251; 
  prime_2(n);
}

