#include<iostream>
using  namespace std;
bool palindrom(string  s,int i,int  j)
{
    if(i>=j)
	  return true;
    return ((s[i]==s[j])&&palindrom(s,i+1,j-1)) ;
}
int main()
{
	string s = "GeekskeeG";
	cout<<palindrom(s, 0, s.length() -1) ? "true" : "false";
    return  1; 	
}