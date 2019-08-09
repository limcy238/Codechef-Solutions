#include<bits/stdc++.h>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	int t,i;
	string je,s;
	for(cin>>t;t--;)
	{
		cin>>je>>s;
		int jj=je.length();
		int ss=s.length();
		int count=0;
		int s1[52]={0},s2[52]={0};
		int i;
		for(i=0;i<jj;++i)
		{
			if(islower(je[i]))
			{
				int t=(int)(je[i]-97);
				++s1[t];
			}
			else
			{
				int t=(int)(je[i]-65+26);
				++s1[t];
			}
		}
		for(i=0;i<ss;++i)
		{
			if(islower(s[i]))
			{
				int t=(int)(s[i]-97);
				++s2[t];
			}
			else
			{
				int t=(int)(s[i]-65+26);
				++s2[t];
			}
		}
		for(i=0;i<52;++i)
		{
			//cout<<i<<" "<<s1[i]<<" "<<s2[i]<<"\n";
			if(s1[i]!=0 and s2[i]!=0)
				count+=s2[i];
		}
	    cout<<count<<"\n";	
	}
	return 0;
}
