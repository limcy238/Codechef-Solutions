#include<bits/stdc++.h>
using namespace std;
long long int gcd(long long int n1,long long int n2)
{
	if(n1==0)
	return n2;
	return gcd(n2%n1,n1);
}
int main()
{
	long long int t,a,b;
	for(scanf("%lld",&t);t--;)
	{
		scanf("%lld%lld",&a,&b);
		long long int h=gcd(a,b);
		long long int lcm=(a*b)/h;
		printf("%lld %lld\n",h,lcm);
		
	}
	return 0;
}

