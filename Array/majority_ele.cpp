#include<iostream>
#include<string>
int majority_ele(int arr[],int  n)
{
   int  res =0, count = 1;
   for(int  i =1;i<n;i++)
   {
      if(arr[res] == arr[i])
	   count++;
	  else
        count--;	  
      if(count  == 0)
	  {
	    res = i;
		count = 1;
	  }
   }
   count = 0;
   for(int  i =0;i<n;i++)
    if(arr[res] == arr[i])
	 count++;
   if(count >=n/2);
    return  res;
}
int  main()
{
   int arr[]={0,0,1,1,1,0,0,1,0,1,1};
   int size = sizeof(arr)/sizeof(arr[0]);
   cout<<majority_ele(arr,size);
   return  1;
   
}