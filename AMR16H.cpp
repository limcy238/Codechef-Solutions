#include<bits/stdc++.h>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	long long int t,n,i;
	for(cin>>t;t--;)
	{
		cin>>n;
		long long int a[n];
		for(i=0;i<n;++i)
			cin>>a[i];
		sort(a,a+n);
		long long int msum=0,sum=0;
		for(i=n-2;i>=0;--i)
		{
			sum+=a[i];
			msum=msum+sum;
			
		}
		msum=msum+sum+a[n-1];
		cout<<msum<<"\n";
	}
	return 0;
}

