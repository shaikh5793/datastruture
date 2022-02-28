#include<iostream>
using  namespace  std;
void  print_sub(string  s,string  curr=" ",int  index = 0)
{
  if(index == s.length()-1)
  {
     cout<<curr<<" "<<;
	 return ;
  }
  
  return print_sub(s,curr,index+1);
  return print_sub(s,curr+s[i],index+1);
}

int  main()
{
  string  s = "ABC";
  print_sub(s);
  return  1;
}