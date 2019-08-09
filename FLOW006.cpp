#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t,n,sum,d;
	for(scanf("%d",&t);t--;)
	{
		scanf("%d",&n);
		sum=0;
		while(n!=0)
		{
			d=n%10;
			sum=sum+d;
			n=n/10;
		}
		printf("%d\n",sum);
	}
	return 0;
}
