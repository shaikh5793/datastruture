#include <iostream>
#include <cmath>
#include <climits>
using namespace std;
int min_adj_diff(int arr[],int  n)
{
    int  min_diff = arr[0] - arr[1];
	for(int  i =1;i<n;i++)
	{
	   min_diff = min(max_diff ,arr[i] - arr[i-1]);
	
	}
    min_diff = min(max_diff,arr[0] - arr[n-1]);
}
int main() {
	
     int arr[] = {8, -8, 9 , -9 ,10,-11,12};
     cout<<min_adj_diff(arr, n);
    
}