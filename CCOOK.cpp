#include<bits/stdc++.h>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	int n;
	cin>>n;
	int a[n][5];
	int i,j,s[n]={0};
	for(i=0;i<n;++i)
	{
		s[i]=0;
		for(j=0;j<5;++j)
		{
			cin>>a[i][j];
			if(a[i][j]==1)
			++s[i];
		}
		if(s[i]==0)
		    cout<<"Beginner"<<endl;
		else if(s[i]==1)
		    cout<<"Junior Developer"<<endl;
		else if(s[i]==2)
	        cout<<"Middle Developer"<<endl;  
		else if(s[i]==3)
		    cout<<"Senior Developer"<<endl;  
	    else if(s[i]==4)
	        cout<<"Hacker"<<endl;
	    else if(s[i]==5)
	        cout<<"Jeff Dean"<<endl;
	}
	return 0;
}
