#include<iostream>
#include<string>
#include<vector>
int trap_water(int  arr[],int  n)
{
  int  lmax[n] ,rmax[n];int  water;
  lmax[0] = arr[0];
  
  for(int  i =1;i<n;i++)
     lmax[i] = max(arr[i],lamx[i-1]);
  rmax[n-1]= arr[n-1];
  
  for(int  i =n-2;i>0;i--)
     rmax[i] = max(arr[i],rmax[i+1]);
  
  for (int  i =0;i<n;i++)
     water+=(min(lmax[i],rmax[i])-arr[i]);
  
  return  water ;
}
int main()
{
   int arr[] = {1,2,2,3,4,4,4,5}, n = sizeof(arr)/sizeof(arr[0]);
   int  water  = trap_water(arr,n);
   cout<<"water : "<<water<<endl;
}
