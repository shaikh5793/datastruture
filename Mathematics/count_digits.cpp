#include<iostream>
#incldue<string>
using namespace std;
//method_1

int  cout_digits_1(int n)
{
  return floor(logn)+1;

}
// Method-2
int cout_digits(int n)
{
   int count = 0;
   while(n)
   {
      count++;
      n=n/10; 
   }
}
int  main()
{
  int n=12345;
  int  count = cout_digits(n);
  cout<<"count : "<<count <<endl;
  
  count = cout_digits_1(n);
  cout<<"count : "<<count <<endl;
}