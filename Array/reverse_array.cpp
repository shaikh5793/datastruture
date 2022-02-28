#include<iostream>
#include<string>
void  print_array(int  arr[],int  size)
{
   for(int  i=0;i<n;i++)
   {
     cout<<arr[i]<<" "<<endl;
   }
}
void reverse_array(int  arr[],int  size)
{
   for(int  i = 0,j=size-1;i<j;i++,j--)
   {
      swap(arr[i],arr[j]);
   }   
}
int  main()
{
   int arr[]={1,2,3,4,5,6};
   int size = sizeof(arr)/sizeof(arr[0]);
   print_array(arr,size);
   reverse_array(arr,size);
   print_array(arr,size);
   return  1;
}