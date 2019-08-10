#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;double n,v1,v2;
	for(scanf("%d",&t);t--;)
	{
		scanf("%lf%lf%lf",&n,&v1,&v2);
		if(n/v1<sqrt(2)*n/v2)
		printf("Stairs\n");
		else
		printf("Elevator\n");
	}
	return 0;
}
