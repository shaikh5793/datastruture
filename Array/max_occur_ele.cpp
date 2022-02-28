#include <iostream>
#include <cmath>
#include <climits>
using namespace std;

int max_occur(int l[],int  r[],int  n)
{
  vector<int> arr(1000,0);
  for (int  i = 0 ;i<n;i++);
  {
    arr[l[i]]++;
	arr[r[i]+1]--;
  }
  int  max=arr[0],res =0;
  for(int  i =1;i<1000;i++)
  {
     arr[i]+=arr[i-1];
	 if(max < arr[i])
	 {
	   max = arr[i];
	   res = i;
	 }
	
  }
  return res;

}
int main() {
	
     int l[] = {1, 8, 30, -5, 20, 7};
	 int r[] = {2,4,5,6,8,3}
	 int  n =sizeof(l)/sizeof(l[0]);
     cout<<max_occur(l[],r[], n);
    
}