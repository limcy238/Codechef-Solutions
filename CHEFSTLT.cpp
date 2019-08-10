#include<bits/stdc++.h>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(false);
	int t,i;string s1,s2;
	for(cin>>t;t--;)
	{
		cin>>s1;
		cin>>s2;
		int max=0,min=0;
		for(i=0;i<s1.length();++i)
		{
			if(s1[i]!=s2[i])
			++max;
			if(s1[i]=='?' and s2[i]=='?' and s1[i]==s2[i])
			++max;
			if(s1[i]!='?' and s2[i]!='?' and s1[i]!=s2[i])
			++min;
		}
		cout<<min<<" "<<max<<endl;
	}
	return 0;
}
