#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	for(scanf("%d",&t);t--;)
	{
		int no;
		scanf("%d",&no);
		int n=floor(sqrt(no));
		printf("%d\n",n);
	}
	return 0;
}
