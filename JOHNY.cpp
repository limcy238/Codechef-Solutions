#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t,n,k;
	for(scanf("%d",&t);t--;)
	{
		scanf("%d",&n);
		int a[n],i;
		for(i=1;i<=n;++i)
		scanf("%d",&a[i]);
		scanf("%d",&k);
		int pos=0;
		for(i=1;i<=n;++i)
		{
			if(a[i]<=a[k])
			++pos;
		}
		printf("%d\n",pos);
	}
	return 0;
}

