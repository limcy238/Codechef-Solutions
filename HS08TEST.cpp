#include<bits/stdc++.h>
using namespace std;
int main()
{
    int X;
	float Y;
	scanf("%d %f",&X,&Y);
		if(((X+0.50)<=Y)and(X%5==0))
		printf("%.2f",(Y-X-0.50));
		else
		printf("%.2f",Y);
		return 0;
}
