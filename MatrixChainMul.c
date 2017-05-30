#include<stdio.h>
long long int min,ans[11][11],p[11],decomposition[11][11],mink;
int main()
{
	long long int n,i,k,size;
	printf("enter no of arrays\n");
	scanf("%lld",&n);
	printf("enter p0 to p%d\n",n);
	for(i=0;i<=n;i++)
	scanf("%d",&p[i]);
	for(i=1;i<=n;i++)
	{
	   ans[i][i]=0;
	   decomposition[i][i]=0;
    }
	for(size=1;size<n;size++)
	{
		for(i=1;i<=(n-size);i++)
		{
			for(k=i;k<(i+size);k++)
			{
				if(k==i)
				{
				    min=ans[i][k]+ans[k+1][i+size]+p[i-1]*p[k]*p[i+size];
					mink=k;	
				}
				else
				{
					if((ans[i][k]+ans[k+1][i+size]+p[i-1]*p[k]*p[i+size])<min)
					{
						min=ans[i][k]+ans[k+1][i+size]+p[i-1]*p[k]*p[i+size];
						mink=k;
				    }
				}
			}
			ans[i][i+size]=min;
			decomposition[i][i+size]=mink;
		}
	}
	printf("optimal solution is %lld\n",ans[1][n]);
	printf("decomposition matrix is\n");
	for(size=0;size<n;size++)
	{
		for(i=1;i<=(n-size);i++)
		printf("%lld ",decomposition[i][i+size]);
		printf("\n");
	}
	return 0;
}
