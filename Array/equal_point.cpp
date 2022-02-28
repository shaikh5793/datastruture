#include <iostream>
#include <cmath>
#include <climits>
using namespace std;


int equal_point(int arr[], int n)
{
   int sum = 0;
   for(int i =0 ;i<n;i++)
    sum+=arr[i];
 
   int l_sum =0;
   for(int  i =0 ;i<n;i++)
   {
       if(l_sum == sum - arr[i])
	   {
	      cout<<"found  equal_point"<<endl;
		  return  1;
	   }
	   l_sum+=arr[i];
	   sum -=att[i];
   }
   return -1;
}


int main() {
	
     int arr[] = {1, 8, 30, -5, 20, 7};
     cout<<equal_point(arr, n);
    
}