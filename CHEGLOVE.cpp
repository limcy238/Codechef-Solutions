#include<bits/stdc++.h>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	int t,n,i;
	for(cin>>t;t--;)
	{
		cin>>n;
		int l[n],g[n];
		for(i=0;i<n;++i)
		cin>>l[i];
		for(i=0;i<n;++i)
		cin>>g[i];
		int front=1,back=1;
		for(i=0;i<n;++i)
		{
			if(l[i]>g[i])
			    front=0;
			if(l[i]>g[n-i-1])
			    back=0;
		}
		if(front==0 and back==0)
		    cout<<"none"<<"\n";
		if(front==1 and back==0)
		    cout<<"front"<<"\n";
		if(front==0 and back==1)
		    cout<<"back"<<"\n";
		if(front==1 and back==1)
		    cout<<"both"<<"\n";
	}
	return 0;
}
