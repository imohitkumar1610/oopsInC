#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t,a,b,c,d;
	cin>>t;
	for(int j=0;j<t;j++)
	{
	  cin>>a;cin>>b;
	  if(a<b)
	  {
	     c=a;
	     a=b;
	     b=c;
	  }
	  c=0;
	  if(a==b)
	  cout<<"YES"<<endl;
	  else if(a%b==0)
	  {
	      d=a/b;
	      for(int i=1;i<=d;i*2)
	      {
	          if(i==d)
	          {cout<<"YES"<<endl;
	       c=1;   break;
	          }
	        
	      }
	       if(c==0)
	         cout<<"NO"<<endl;
	  }
	  else
	  {
	      cout<<"NO"<<endl;
	  }
	}
	return 0;
}
