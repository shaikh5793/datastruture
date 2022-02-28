#include <iostream>
#include <cmath>
#include <climits>
using namespace std;

void  rearrange(int arr[],int  N)
{
   for(int  i=0;i<N;i++)
     arr[i]+=arr[arr[i]%n]*n;
	 
   for(int i=0;i<N;i++)
       arr[i]=arr[i]/N;
}
void print(int  arr, int  N)
{
  for(int i=0;i<N;i++)
     cout<<arr[i]<<" "<<endl;
}

int main() {
	
     int arr[] = {1,2,3,4,5,6};
     rearrange(arr,(sizeof(arr)/sizeof(arr[0]));
	 print(arr,sizeof(arr)/sizeof(arr[0]));
    
}