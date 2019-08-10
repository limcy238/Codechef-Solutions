#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t,n;
	for(scanf("%d",&t);t--;)
	{
		scanf("%d",&n);
		int i,c=0;
		for(i=2;i<=n/2;++i)
		{
			if(n%i==0)
			{
				c=1;
				break;
			}
		}
		if(c)
		printf("no\n");
		else
		printf("yes\n");
	}
	return 0;
}
