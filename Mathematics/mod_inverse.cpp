#include<iostream>
#include<string>
using namespace std;
int modInverse(int a,int m)
{
   int  a=a%m;
   for(int x =1;x<=m;x++)
   {
     if((a*x)%m == 1)
	  return  x;
   }
   return -1;

}
int  main()
{
 int  res = modInverse(3,11);
 cout<<"res :"<<res<<endl;
}