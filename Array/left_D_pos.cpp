#include<iostream>
#include<string>
void  print_array(int  arr[],int  size)
{
   for(int  i=0;i<n;i++)
   {
     cout<<arr[i]<<" "<<endl;
   }
}
// method 1
void left_one_pos(int  arr[],int size)
{
   int  temp  = arr[0];
   for(int i =1;i<size;i++)
   {
      arr[i-1] =arr[i];
   }
   arr[size -1] = temp;
}


void  left_D_pos(int  arr[],int size,int  d)
{
  for(int  i = 0;i<d;i++)
  {
     left_one_pos(arr,size);
  }
}
//method 2
void reverse_array(int arr[],int i,int j)
{
	for(;i<j;i++,j--)
	{
		swap(arr[i],arr[j]);
	}
}
void  left_D_pos_2(int  arr[],int  size,int d)
{
	reverse_array(arr,0,d-1);
	reverse_array(arr,d,size);
	reverse_array(arr,0,size);
}
int  main()
{
   int arr[]={1,2,2,3,4,4};
   int size = sizeof(arr)/sizeof(arr[0]);
   
   print_array(arr,size);
   left_D_pos(arr,size,3);
   print_array(arr,size);
   
   print_array(arr,size);
   left_D_pos_2(arr,size,3);
   print_array(arr,size);
   
   return  1;
   
}