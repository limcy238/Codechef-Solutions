#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t,s;
	for(scanf("%d",&t);t--;)
	{
		scanf("%d",&s);
		float sal;
		if(s<1500)
		sal=s+0.1*s+0.9*s;
		else
		sal=s+500+0.98*s;
		printf("%g\n",sal);
	}
	return 0;
}
