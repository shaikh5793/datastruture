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
  
int last_element(int a[],int n,int x)
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
        if(mid == n-1 || (a[mid+1]!=arr[mid]))
		   return mid;
		 else;
            low = mid + 1;		 
     }	 
  }
  return -1;
}  
int count_occurence(int  a[],int  n,int x)
{
  int first = first_element(a,n,x);
   if(first == -1)
     return -1;
  return last_element(a,n,x) - first + 1; 	 
}
int  main()
{
  int a[]={3,3,5,6,6,7},n = (sizeof(a)/sizeof(a[0]));
  int  res = count_occurence(a,n,6);
  if(res == -1)
    cout<<"not found"<<endl;
  else
    cout<<"res : "<<res<<endl;  
	
  return 0;  
}





