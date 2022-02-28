#include<iostream>
#incldue<string>
using namespace std;
bool palindrom_num(int n)
{
  int  res = n,sum =0;
  for(;n;n=n/10)
     sum+=sum*10+n%10;
 
  if(sum==res)
    return true;
  else
    return false;
}
int  main()
{
  int n=12321;
  bool check = palindrom_num(n);
  if(check)
    cout<<"number  is  palindrom"
  else
   cout<<" number  is  not  palindrom"  
  
}