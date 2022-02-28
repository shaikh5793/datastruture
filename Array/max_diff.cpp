#include<iostream>
#include<string>
#include<vector>
int max_diff(int arr[],int  n)
{
  int max_diff = arr[1] - arr[0],min_val = arr[0];
  for(int i=1;i<n;i++)
  {
     max_diff = max(max_diff -arr[i],max_diff);
	 min_val = min(min_val,arr[i]);
  }
  return  max_diff;
}

int main()
{
   int arr[] = {7, 10, 4, 10, 6, 5, 2}, n = sizeof(arr)/sizeof(arr[0]);
   int max_diff = max_diff(arr, n);
   cout<<"maxx_diff : "<<max_diff<<endl;
}
