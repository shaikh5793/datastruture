#include<iostream>
using  namespace  std;
void  TOH(int  n,char A,char B,char C)
{
  if(n==1)
  {
    cout<<"Move from 1"<<"A To C"<<endl;
    return;
  }
  TOH(n-1,A,C,B);
  cout<<"Move"<<n<<"A to C"<<endl;
  TOH(n-1,B,A,C);
}
int  main()
{
  TOH(3,'A','B','C');
  return 1;
}