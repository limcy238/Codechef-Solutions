#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;double qty,pr;
	for(scanf("%d",&t);t--;)
	{
		scanf("%lf%lf",&qty,&pr);
		if(qty>1000.0)
		printf("%.6lf\n",0.9*qty*pr);
		else
		printf("%.6lf\n",qty*pr);
	}
	return 0;
}
