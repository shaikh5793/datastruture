#include<iostream>
using namespce std;
int count_1s(int a[],int n)
{
   int mid ,low =0,high =n-1;
   while(low<=high)
   {
      mid = (low+high)/2;
	  if(arr[mid] == 0)
	  {
	     low = mid+1;
	  }
	  else
	  {
	     if(mid == 0||a[mid-1] == 0)
		   return (n-mid);
		 else
           high = mid -1;		 
	  }
   }
   return -1;
}
int  main()
{
  int  a[]={0,0,0,1,1,1,1};
  int  n = sizeof(a)/sizeof(a[0];
  int res = count_1s(a,n);
  if(res == -1)
    cout<<"number of 1s not allowed"<<endl;
  else
   cout<<"res : "<<res<<endl;  

}