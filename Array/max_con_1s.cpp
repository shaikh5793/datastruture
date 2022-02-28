#include<iostream>
#include<string>
#include<vector>
int max_con_1s(int arr[],int  n)
{
	int  count = 1,res = 0;
	for(int i = 0;i<n;i++)
	{
		if(arr[i]!=0)
		{
			count++;
			res = max(count,res);
		}
		else
		{
			count = 1;
		
		}
		
	}
	return  res;
	
}
int main()
{
   int arr[] = {0,1,1,1,1,0,1,1,0,0,1}, n = sizeof(arr)/sizeof(arr[0]);
   int  max_con  = max_con_1s(arr,n);
   cout<<"max_con : "<<max_con<<endl;
}
