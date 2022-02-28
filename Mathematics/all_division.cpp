#include<iostram>
#include<string>
using namespace std;
void  all_division(int n)
{
  for(int i=1;i*i<n;i++)
  {
     if(n%i == 0)
	  count<<i<<endl;
  }
  for(;i>=1;i--)
  {
    if(n%i == 0)
    count<<(n/i)<<endl;
  }
}
int main()
{
 int n =15;
 all_division(n);
}
