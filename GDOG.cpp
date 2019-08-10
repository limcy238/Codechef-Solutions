#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t,n,k;
	for(scanf("%d",&t);t--;)
	{
		scanf("%d%d",&n,&k);
		int i,max=n%1;
		for(i=2;i<=k;++i)
		{
			if(n%i>max)
			max=n%i;
		}
		printf("%d\n",max);
	}
	return 0;
} 
