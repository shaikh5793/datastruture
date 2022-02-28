#include<iostream>
#include<string>

bool  II(int arr[],int  n)
{
   int i=0;
   while(i<n-1 and arr[i] <= arr[i+1])
     i++;
   if(i==n-1)
     return  false;
   i++;
   while(i<n-1 and arr[i] <= arr[i+1])
      i++;
   if(i==n-1 and  arr[n-1]<=arr[0])
     return  true;
   else
      return false;   


}

bool  DD(int  arr[],int  n)
{
   int i=0;
   while(i<n-1 and arr[i] >= arr[i+1])
     i++;
   if(i==n-1)
     return  false;
   i++;
   while(i<n-1 and arr[i] >= arr[i+1])
      i++;
   if(i==n-1 and  arr[n-1] >= arr[0])
     return  true;
   else
      return false;   


}

bool check_sort(int arr[],int n)
{
   return (II(arr,n)||DD(arr,n));
}
int  main()
{
	int  arr[]={3,4,5,6,1,2};
	int n= sizeof(arr)/sizeof(arr[0]);
	bool check  = check_sort(arr,n);
    if(check)
		 cout<<"array is sorted  and rotate"<<endl;
	 else
		 cout <<"array is  not  sorted  and  rottaed"<<endl;
}