#include<iostream>
#include<string>
int lodd_even(int  arr[],int  n)
{
  int count  = 1;
  int res = 0;
  for(int  i =1;i<n;i++)
  {
      if((arr[i]%2!=0)&&(arr[i]%2==0)||((arr[i]%2 == 0)&& arr[i-1]!=0))
	  {
	     count++;
		 res = max(count,res);
      }
	  else
	  {
	    count =1;
	  } 	  
  }
  return  count ;
}
int main()
{
  int  arr[]={1,2,3,4,5,6,7},n=sizeof(arr)/sizeof(arr[0]);
  int  res = lodd_even(arr,n);
  cout<<"res: " <<res <<endl;
  return  1;
}