#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;long long int n,b,m;
	for(scanf("%d",&t);t--;)
	{
		scanf("%lld%lld%lld",&n,&b,&m);
		long long int time=0;
		while(true)
		{
			int k;
			if(n%2==0)
			k=n/2;
			else
			k=(n+1)/2;
			time+=k*m;
			n=n-k;
			if(n==0)
			break;
			time+=b;
			m=m*2;
		}
		printf("%lld\n",time);
	}
	return 0;
}
