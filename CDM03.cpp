#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t,a,b,d;
	for(scanf("%d",&t);t--;)
	{
		scanf("%d%d",&a,&b);
		switch(a%10)
		{
			case 0:d=0;break;
			case 1:d=1;break;
			case 2:
				switch(b%4)
				{
					case 1:d=2;break;
					case 2:d=4;break;
					case 3:d=8;break;
					case 0:d=6;break;
				}
				break;
			case 3:
				switch(b%4)
				{
					case 1:d=3;break;
					case 2:d=9;break;
					case 3:d=7;break;
					case 0:d=1;break;
				}
				break;
			case 4:
				switch(b%4)
				{
					case 1:
					case 3:d=4;break;
					case 2:
					case 0:d=6;break;	
				}
				break;
			case 5:d=5;break;
			case 6:d=6;break;
			case 7:
				switch(b%4)
				{
					case 1:d=7;break;
					case 2:d=9;break;
					case 3:d=3;break;
					case 0:d=1;break;
				}
				break;
			case 8:
				switch(b%4)
				{
					case 1:d=8;break;
					case 2:d=4;break;
					case 3:d=2;break;
					case 0:d=6;break;
				}
				break;
			case 9:
				switch(b%4)
				{
					case 1:
					case 3:d=9;break;
					case 2:
					case 0:d=1;break;
				}
				break;
		}
			printf("%d\n",d);
	}
	return 0;
}

				
				
		
