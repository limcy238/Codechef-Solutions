#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t,n,k;
	for(scanf("%d",&t);t--;)
	{
		scanf("%d%d",&n,&k);
		printf("%d %d\n",n/k,n%k);
	}
	return 0;
}
