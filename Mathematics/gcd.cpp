#include<iostream>
#include<string>
using namespace std;
//method  1
int  gcd(int a,int b)
{
  if(b==0)
   return a;
  
 return gcd(b,a%b);  

}
// method 2
int gcd1(int a,int b)
{
  while(a!=b)
  {
     if(a>b)
	  a=a-b;
	 else
      b=a-b;	 
  }
  return  b;
}
int gcd2(int a,int b)
{
	int res = min(a,b);
	while(res >0)
	{
		if(a%res == 0 && b%res == 0)
		  break;
	    else
			res--;
	}
	return res;
	
}
int  main()
{
  int n1 = 12 ,int  n2 = 15;
  int res = gcd(n1,n2);
  cout<<"res:"<<res<<endl;
  res = gcd1(n1,n2);
  cout<<"res:"<<res<<endl;
  res = gcd1(n1,n2);
  cout<<"res:"<<res<<endl;
  res = n1*n2 / gcd(n1.n2); // a*b = gcd(a,b) * LCM(a,b);
  cout<<"LCM"<<res<<endl;
  
}