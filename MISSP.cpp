#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t,n;
	for(scanf("%d",&t);t--;)
	{
		scanf("%d",&n);
		int a[n],i;
		for(i=0;i<n;++i)
		scanf("%d",&a[i]);
		sort(a,a+n);
		for(i=0;i<n;++i)
		{
			if(a[i]==a[i+1])
			++i;
			else
			printf("%d\n",a[i]);
		}
	}
	return 0;
}
