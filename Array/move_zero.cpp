#include<iostream>
#include<string>
void  print_array(int  arr[],int  size)
{
   for(int  i=0;i<n;i++)
   {
     cout<<arr[i]<<" "<<endl;
   }
}
void move_zero(int  arr[],int&  size)
{
    int  count = 0;
	for(int  i =0;i<size;i++)
	{
	   if(arr[i]!=0)
	   {
	      swap(arr[i],arr[count]);
		  count++;
	   }
	}
}
int  main()
{
   int arr[]={1,2,2,3,4,4};
   int size = sizeof(arr)/sizeof(arr[0]);
   print_array(arr,size);
   move_zero(arr,size);
   print_array(arr,size);
   return  1;
   
}