#include <iostream>
#include <cmath>
#include <climits>
using namespace std;
int maxSum(int arr[], int n, int k)
{
	int curr_sum = 0;
	for(int i =0 ;i<k;i++)
	  curr_sum +=arr[i];
	for(int i = k;i<n;i++)
    {
       curr_sum+=(arr[i] - arr[i-k]);
	   max_sum = max(curr_sum,max_sum);
    }	
	return max_sum;
}
int main() {
     int arr[] = {1, 8, 30, -5, 20, 7}, n = 6, k = 3;
     cout<<maxSum(arr, n, k)
}