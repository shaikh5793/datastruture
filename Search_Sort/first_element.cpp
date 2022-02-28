#include<iostream>
using namespace std;
int first_element(int a[],int n,int x)
{
  int mid,low = 0,high = n-1;
  while(low<=high)
  { 
     mid = (low+high)/2;
	 if(arr[mid] > x)
	   high = mid -1;
	 else if (arr[mid) < x)
       low = mid +1;
     else
     {
        if(mid == 0 || (a[mid-1]!=arr[mid]))
		   return mid;
		 else;
            high = mid - 1;		 
     }	 
  }
  return -1;
}  
int  main()
{
  int a[]={3,3,5,6,6,7},n = (sizeof(a)/sizeof(a[0]));
  int  res = first_element(a,n,6);
  if(res == -1)
    cout<<"not found"<<endl;
  else
    cout<<"res : "<<a[res]<<endl;  
	
  return 0;  
}





