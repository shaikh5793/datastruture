
#include<iostream>
#include<climits>
using  namespace std;
bool isprime(int  n)
{
   if(n<=1)
     return  false;
   for(int  i = 2;i<=sqrt(n);i++)
      if(n%i == 0)
        return false;
   return true; 		

}
int  exactly3divide(int  n)
{
   int count = 0;
   N = sqrt(N);
   for(int  i=1;i<=N;i++)
   {
       isprime(i);
	    count++;
   }  
   return  count;
}
int main()
{
  int  res = exactly3divide(10);
  cout<<"res:"<<res<<endl;

}