#include<iostream>
#include<string>
int  largest_ele(int  arr[],int  size)
{
    int max_index = 0;
    for(int  i = 1;i<size;i++)
	{
	   if(arr[i] > arr[max_index])
	     max_index = i;
	
	}
    return  arr[max_index];
}
int  main()
{
   int arr[]={12,23,45,32,56,78,43};
   int size = sizeof(arr)/sizeof(arr[0]);
   int largest = largest_ele(arr,size);
   cout<<"largets _element : " << lagest << endl;
}