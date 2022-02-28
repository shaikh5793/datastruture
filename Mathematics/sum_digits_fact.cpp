//digits factorial
#include<iostream>
#include<string>
using namespace std;
int  digits_fact(int  n)
{
   int sum  = 0;
   for(int  i=2;i<n;i++)
   {
      sum+=floor(log(i)+1);
   
   }
   return sum;

}
int  main()
{
 int  n = 25;
 int sum = digits_fact(n);
 cout<,"sum :"<<sum<<endl;
}