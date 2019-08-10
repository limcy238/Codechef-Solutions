#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n1,n2,n3,list[150000],j=0;
	scanf("%d%d%d",&n1,&n2,&n3);
	int i;
	for(i=0;i<n1;++i)
	scanf("%d",&list[i]);
	for(i=n1;i<(n1+n2);++i)
	scanf("%d",&list[i]);
	for(i=n2+n1;i<(n1+n2+n3);++i)
	scanf("%d",&list[i]);
	sort(list,list+(n1+n2+n3));
	int f[n1+n2+n3];
	for(i=0;i<(n1+n2+n3);)
	{
		if(list[i]==list[i+1])
		{
			f[j]=list[i];
			++j;
			if(list[i+1]==list[i+2])
			i=i+3;
			else
			i=i+2;
			
			
		}
		else
	{
		++i;
	}
	}
	printf("%d\n",j);
	for(i=0;i<j;++i)
	printf("%d\n",f[i]);
	return 0;
}
