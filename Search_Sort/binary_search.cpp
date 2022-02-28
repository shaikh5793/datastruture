#include<iostream>
using namespace  std;
//iterative 
int  binary_search(int arr[],int low,int high,int x)
{
  int  mid ;
  while(low<=high)
  {
    mid = (low+high /2);
	if(arr[mid] == x)
	  return  mid;
	else if(arr[mid) < x)
      low = mid+1;
    else if(arr[mid] > x)
      high = mid-1;	  
  }
  return -1;
}
// recursive
int  binary(int a[],int low ,int high,int x)
{
	if(low<= high)
	{
	   int mid = (low+high)/2;
	   if(a[mid] == x)
		   return mid;
	   else if(a[mid] < x)
		   return binary(a,mid+1,high,x);
	   else
		   return binary(a,low,mid-1,x);
	}
	else
		return -1;
	
	
}
int main()
{
 int  a[]={5,10,15,16,17,18};
 int n =sizeof(a)/sizeof(a[0]);
 int res = binary_search(a,0,n-1,16);
 if(res == -1)
  cout<<"not found in array"<<endl;
 else
  cout<<"res : "<<a[res]<<endl;
  res = binary(a,0,n-1,10);
 if(res == -1)
  cout<<"not found in array"<<endl;
 else
  cout<<"res : "<<a[res]<<endl; 
 
 return 0;
}