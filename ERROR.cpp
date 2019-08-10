#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	char str[100000];
	for(scanf("%d",&t);t--;)
	{
		scanf("%s",str);
		int i,flag=0;
		for(i=0;str[i]!='\0';++i)
		{
			if(str[i]=='0' and str[i+1]=='1' and str[i+2]=='0')
			{
				flag=1;
				break;
			}
			if(str[i]=='1' and str[i+1]=='0' and str[i+2]=='1')
			{
				flag=1;
				break;
			}
		}
		if(flag==1)
		printf("Good\n");
		else
		printf("Bad\n");
	}
	return 0;
}
