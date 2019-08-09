#include<bits/stdc++.h>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	int t,n,i;
	long int p,num;
	for(cin>>t;t--;)
	{
		cin>>n>>p;
		int k,caked=0,hardd=0;
		for(i=0;i<n;++i)
		{
			cin>>k;
			if(k>=p/2)
			++caked;
			if(k<=p/10)
			++hardd;
		}
		if(caked==1 and hardd==2)
		cout<<"yes"<<endl;
		else
		cout<<"no"<<endl;
	}
	return 0;
}
