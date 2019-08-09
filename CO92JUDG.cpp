#include<bits/stdc++.h>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	int t,n,i,max,sum1,sum2;
	for(cin>>t;t--;)
	{
		cin>>n;
		int a[n],b[n];
		sum1=0;sum2=0;
		max=-1;
		for(i=0;i<n;++i)
		{
		    cin>>a[i];
			sum1+=a[i];
			if(a[i]>=max)
			   max=a[i];	
		}
		sum1-=max;	
		max=-1;
		for(i=0;i<n;++i)
		{
		    cin>>b[i];
			sum2+=b[i];
			if(b[i]>=max)
			   max=b[i];	
		}
		sum2-=max;
		if(sum1<sum2)
		   cout<<"Alice"<<"\n";
		else if(sum1>sum2)
		   cout<<"Bob"<<"\n";
		else if(sum1==sum2)
		   cout<<"Draw"<<"\n";
	}
	return 0;
}
