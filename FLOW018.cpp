#include<bits/stdc++.h>
using namespace std;
int fact(int num)
{
	if(num==0)
	return 1;
	else
	return num*fact(num-1);
}
int main()
{
	int t,n;
	for(scanf("%d",&t);t--;)
	{
		scanf("%d",&n);
		printf("%d\n",fact(n));
	}
	return 0;
}
