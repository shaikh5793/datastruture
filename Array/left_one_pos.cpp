#include<iostream>
#include<string>
void  print_array(int  arr[],int  size)
{
   for(int  i=0;i<n;i++)
   {
     cout<<arr[i]<<" "<<endl;
   }
}
void left_one_pos(int  arr[],int size)
{
   int  temp  = arr[0];
   for(int i =1;i<size;i++)
   {
      arr[i-1] =arr[i];
   }
   arr[size -1] = temp;
}

int  main()
{
   int arr[]={1,2,2,3,4,4};
   int size = sizeof(arr)/sizeof(arr[0]);
   print_array(arr,size);
   left_one_pos(arr,size);
   print_array(arr,size);
   return  1;
   
}