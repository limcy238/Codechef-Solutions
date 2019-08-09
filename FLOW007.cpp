#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t,n;
	for(scanf("%d",&t);t--;)
	{
		scanf("%d",&n);
		int rev=0,rem;
		while(n)
		{
			rem=n%10;
			rev=rev*10+rem;
			n=n/10;
		}
		printf("%d\n",rev);
	}
	return 0;
}
