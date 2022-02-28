#include<iostream>
#include<string>
void  print_array(int  arr[],int  size)
{
   for(int  i=0;i<n;i++)
   {
     cout<<arr[i]<<" "<<endl;
   }
}
void remove_dup(int  arr[],int&  size)
{
    int  res = 1;
	for(int i = 1;i<size;i++)
	{
	    if(arr[i]!=arr[res-1])
		{
		  arr[res] = arr[i];
		  res++;
		}
	}
	size  = res
}
int  main()
{
   int arr[]={1,2,2,3,4,4};
   int size = sizeof(arr)/sizeof(arr[0]);
   print_array(arr,size);
   remove_dup(arr,size);
   print_array(arr,size);
   return  1;
   
}