#include<bits/stdc++.h>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	string str;int n,i,j;
	cin>>str;
	int k=str.length();
	for(cin>>n;n--;)
	{
		string wd;
		cin>>wd;
		int flag=0,count=0;
		for(i=0;wd[i]!='\0';++i)
			for(j=0;str[j]!='\0';++j)
				if(wd[i]==str[j])
				    ++count;
	   	if(count!=i)
		    cout<<"No\n";
		else
		    cout<<"Yes\n";
	}
	return 0;
}

