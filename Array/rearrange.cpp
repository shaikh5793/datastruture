#include <iostream>
#include <cmath>
#include <climits>
using namespace std;
int  rearrange(int arr[],int n)
{
  int  min_idx = 0,max_idx =n-1;
  int  max_ele = arr[n-1]+1;
  for(int i =0 ;i<n;i++)
  {
     if(arr[i]%2==0)
	 {
	    arr[i]+=(arr[max_idx]%max_ele)*max_ele;
		max_idx --;
	 }
	 else
	 {
	    arr[i]+=(arr[min_idx]%max_ele)*max_ele;
		min_idx --;
	 }
  
  }
  for(int  i=0;i<n;i++)
  {
    arr[i]=arr[i]/max_ele;
  }
}
int main() {
	
     int arr[] = {1, 8, 30, -5, 20, 7};
	 int  n =sizeof(arr)/sizeof(arr[0]);
	 print(arr,n);
     cout<<rearrange(arr, n);
	 print(arr,n);
    
}