#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t,a,b,c,num;
	for(scanf("%d",&t);t--;)
	{
		scanf("%d%d%d",&a,&b,&c);
		num=(a>b)?
		(b>c)?b:((c>a)?a:c)
		:(a>c)?a:((c>b)?b:c);
		printf("%d\n",num);
	}
	return 0;
}
