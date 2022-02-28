#include<iostream>
using namespace std;
void  print_1(int n)
{
   if(n==0)
     return;
   cout<<n<<endl;
   return print_1(n-1);    // 10 9 8  7 6 5 4 3 2 1
}
void  print_2(int n)
{
   if(n==0)
     return;
   cout<<n<<endl;
   print_2(n-1); 
   // 1 2 3 4 5 6 7 8 9 10
   cout<<n<<endl;
}


int main()
{
  int n =10;
  print_1(n);
  print_2(n);

}