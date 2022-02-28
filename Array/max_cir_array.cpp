#include<iostream>
#include<string>
#include<vector>
int  max_sub_array(int arr[],int  n)
{
   int  max_ending  = arr[0],res = arr[0];
   for(int  i =1 ;i<ni;++)
   {
     max_ending  = max(max_ending+arr[i],arr[i]);
     res = max(res,max_ending);
   }
   return  res;
}
int max_cir_array(int  arr[],int n)
{
   int max_cir_array = max_sub_array(arr,n);
   if(max_cir_array <0)
	  return  max_cir_array;
   int  sum  = 0;
   for(int  i = 0;i<n;i++)
   {
      sum += arr[i];
	  arr[i] = -arr[i];
   }   
   int  max_res = sum+max_sub_array(arr,n);
   max_res = max(max_cir_array,max_res);
   return  max_res;
}
int main()
{
   int arr[] = {1,2,2,3,4,4,4,5}, n = sizeof(arr)/sizeof(arr[0]);
   int  sum  = max_cir_array(arr,n);
   cout<<"sum : "<<sum<<endl;
}
