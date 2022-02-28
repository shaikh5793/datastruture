#include<iostream>
#include<string>
#include<vector>
void fre_array(int  arr[],int  n)
{
  int  i = 1;
  while(i<n)
  {
  
      int count =1;
	  while(i<n-1 && a[i]==a[i-1])
	  {
	    count ++;
		i++;
      }     
     cout<<"arr[i-1]"<<arr[i-1]<<"count"<<count<<endl;
	 count  = 1;
	 i++;
}
int main()
{
   int arr[] = {1,2,2,3,4,4,4,5}, n = sizeof(arr)/sizeof(arr[0]);
    fre_array(arr, n);
   cout<<"maxx_diff : "<<max_diff<<endl;
}
