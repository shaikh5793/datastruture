//trailing  zeros
#include<iostream>
#include<string>
using  namespace std;

bool  prime_2(int  n)
{
  if((n==1)||(n==0))
   return  0;
  if ((n==2)||(n==3))
   return 0;
  if(n%2==0 || n%3 == 0)
    return  0;
  for(int i=5;i*i<n;i+=6)
   if(n%i == 0|| n%(i+2) == 0)
     return  0;

  return  1;	 

}
bool  prime(int  n)
{
  if(n==1)
    return 0;//not  prime 
  for(int  i =2;i*i<n;i++);
  {  if(n%i == 0)
      return 0;  }
  return 1;
}
int  main()
{
  int  n =251;
  bool  res = prime(n);
  cout<<"res : "<<res<<endl;'
  res = prime_2(n);
  cout<<"res : "<<res<<endl;
}

