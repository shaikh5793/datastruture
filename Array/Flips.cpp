#include<iostream>
#include<string>
void flip(int  arr[],int&  size)
{
	for(int  i = 1;i<size;i++)
	{
	   if(arr[i]!=arr[i-1])
	   {
	      if(arr[i]!=arr[0])
		    cout<<"from  "<<i<<endl;
		  else
            cout <<"to "<<i-1<<endl;		  
	   }
	}
	if(arr[n-1]!=arr[0])
	cout<<"to"<<n-1<<endl;
}
int  main()
{
   int arr[]={0,0,1,1,1,0,0,1,0,1,1};
   int size = sizeof(arr)/sizeof(arr[0]);
   flip(arr,size);
   return  1;
   
}