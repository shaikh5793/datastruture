#include <iostream>
#include <cmath>
#include <climits>
using namespace std;

void  print(int arr[],int  N)
{
   for(int  i=0;i<N;i++)
     cout<<arr[i]<<endl;
}
void maxi (int  arr[],int  N, int P)
{
   int  maxi =max(P,N);
   vector<int>  count(maxi+1);
   for(int  i =0;i<N;i++)
     count[i+1]+=1;
	 
   for(int i=0;i<N;i++)
    arr[i] = count[i+1];   
}


int main() {
	
     int arr[] = {1,2,3,4,5,6};
     maxi(arr,5,3);
	 print(arr,N);
    
}