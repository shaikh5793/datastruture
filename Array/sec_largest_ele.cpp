#include<iostream>
#include<string>
int  sec_largest_ele(int  arr[],int  size)
{
    int res = -1;
	int  largest = 0;
    for(int  i = 1;i<size;i++)
	{
	   if(arr[i] > arr[largest])
	   {
	     res = largest ;
	     largest = i;
	   }
	   else if(arr[i] !=arr[res])
	   {
	      if(res==-1 || arr[i] > arr[res])
		    res = i;
	   }
	}
    return  arr[res];
}
int  main()
{
   int arr[]={12,23,45,32,56,78,43};
   int size = sizeof(arr)/sizeof(arr[0]);
   int largest = sec_largest_ele(arr,size);
   cout<<"largets _element : " << lagest << endl;
}