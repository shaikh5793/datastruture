#include<iostream>
#include<string>
#include<vector>
int stock_buy_sell(int  arr[],int  n)
{
  int  profit  = arr[0];
  for(int  i =1;i<n;i++)
   profit += arr[i]- arr[i-1];
   
   return  profit ;
}
int main()
{
   int arr[] = {1,2,2,3,4,4,4,5}, n = sizeof(arr)/sizeof(arr[0]);
   int  profit  = stock_buy_sell(arr,n);
   cout<<"profit : "<<profit<<endl;
}
