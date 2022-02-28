#include<iostream>
#include<string>
#include<vector>
vector<int>  curr_leader(int  arr[],int  size)
{
  int curr_leader = arr[size -1];
  vector<int> v;
  v.push_back(curr_leader);
  for(int i=size-2;i>=0;i--)
  {
      if(curr_leader < arr[i])
	  {
	     curr_leader = arr[i];
		v.push_back(curr_leader);
	  }
  }
  return v;
}

int main()
{
   int arr[] = {7, 10, 4, 10, 6, 5, 2}, n = 7;
   curr_leaders(arr, n);
}
