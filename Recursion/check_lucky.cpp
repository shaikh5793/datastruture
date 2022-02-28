#include<iostream>
using namspace  std;
bool check_lucky(int n,int counter )
{
   if(counter <=n)
   {
      if(n%counter == 0)
	    return  false;
	  n=n-n/counter;
      counter++;
	  return  check_lucky(n,counter);
   }
   else
   {
      return  true;
   }
}
int main()
{
   int n = 19;
   cout<<(check_lucky(n,2)?"true":"false"<<endl;
   return 0;
}