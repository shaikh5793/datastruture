#include<iostream>
using namespace std;
int  countsubset(int arr[],int  n,int  k)
{
   if(n==0)
     return (k == 0? 1,0);
    return  countsubset(arr,n-1,k)+countsubset(arr,n-1,k-arr[n-1]);
}
int main()
{ 
    	int n = 3, arr[]= {10, 20, 15}, sum = 25;
    	cout<<countsubset(arr, n, sum);
    	return 0;
}