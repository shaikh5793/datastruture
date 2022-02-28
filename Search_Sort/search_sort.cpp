#include<iostream>
using  namespace std;
int binary(int a[],int low,int high ,int x)
{
    if(low>high)
	  return -1;
	int  mid =(low+high)/2;
    if(a[mid] < x)
      return binary(a,mid+1,high,x);
    else if(a[mid] > x)
      return binary(a,low,mid-1,x);
    else
       return mid;	
}
int search(int a[],int x)
{
   int  i =1;
   while(a[i]<x)
     i = i*2;
   if(a[i] == x)
     return i;
   return binary(a,i/2+1,i,x);	 
}
int main()
{
  int  a[] = {10,15,16,17,20,23};
  int  n =sizeof(a)/sizeof(a[0]);
  int sea=search(a,17);
  cout<<"sea : "<<sea<<endl;
}