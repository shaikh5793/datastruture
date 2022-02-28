#include <iostream>
using  namespace  std;
int sqrtfloor(int x)
{
  int  low = 1,high = x,ans = -1,mid;
  while(low <=high)
  { 
     mid=(low+high)/2;
	 int sqrt = mid*mid;
	 if(sqrt == x)
	   return mid;
	 else if(sqrt > x)
     {
	   high =mid -1;
	 }
	 else
	 {
	   low = mid+1;
	   ans = mid;
	 }
  }
  return ans;
}
int main()
{ 
   int  ans = sqrtfloor(17)
   cout<<"ans :"<<ans<<endl;
}