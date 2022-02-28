#include<iostream>
#include<string>
#include<vector>

using namespace std;

string  mapping[10] = {" "," ","abc","def,"ghi","jkl","mno","pqrs","tuv","wxyz" };

void  solve (int a[],int N,string output,vector<string> &ans,int index)
{
  if(index >= N)
  {
     ans.push_back(output);
	 return;
  }
  
  string value = mapping[a[index]];
  
  for(int  i = 0;i<value.length();i++)
  {
     output.push_back(value[i]);
	 solve(a, N, output, ans, index);
	 output.pop_back();
  }

}
int main(){
  int a[]={2,4,5};
  int  N = sizeof(a)/sizeof(a[0]);
  string output;
  vector<string> ans;
  if(N==0)
	  cout<<"not valid array"<<endl;
  int  index =0;
  
  solve(a,N,output,ans,index);
  for(auto i:ans)
  {
	  cout<<ans[i]<<" ";
  }
  cout<<endl;
 return  0;

}