  #include<bits/stdc++.h>
  using namespace std;
  int main()
  {
  	int t;
  	for(scanf("%d",&t);t--;)
  	{
  		int n,k;
  		scanf("%d%d",&n,&k);
  		int w[n],i,sum=0;
  		for(i=0;i<n;++i)
  		{
  		    scanf("%d",&w[i]);
  	     	sum=sum+w[i];
  	    }
  		sort(w,w+n);
		int son=0,x;
  		if(k<=n/2)
  		x=k;
  		else
  		x=n-k;
  		for(i=0;i<x;++i)
		son=son+w[i];
	    printf("%d\n",sum-2*son);
  		
	}
	return 0;
  }
