#include<bits/stdc++.h>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);cout.tie(0);
	int t;string s;
	for(cin>>t;t--;)
	{
		cin>>s;
		int l=s.length();
			if(l%2!=0)
			cout<<"NO"<<endl;
			else
			{   int i,flag=0;
			    for(i=1;i<l-1;++i)
		     	{
			    	if(s[i]!=s[i-1] and s[i-1]==s[i+1])
				        ++flag;
			    	else
			    	{
			            flag=-1;break;
			    	}
		     	}
			if(flag==-1)
			cout<<"NO"<<endl;
			else
			cout<<"YES"<<endl;
		    }
	}
	return 0;
}
