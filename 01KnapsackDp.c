#include<stdio.h>
int v[101],w[101],k[101][101],selected[101];
int main()
{
	int n,i,j,wt;
	printf("enter no of items\n");
	scanf("%d",&n);
	printf("enter values of %d items\n",n);
	for(i=1;i<=n;i++)
	scanf("%d",&v[i]);
	printf("enter weights of %d items\n",n);
	for(i=1;i<=n;i++)
	scanf("%d",&w[i]);
	printf("enter weight of knapsack\n");
	scanf("%d",&wt);
	for(i=1;i<=n;i++)
	selected[i]=0;
	for(i=0;i<=n;i++)
	k[0][i]=0;
	for(i=1;i<=wt;i++)
	k[i][0]=0;
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=wt;j++)
		{
			if(j<w[i])
			k[i][j]=k[i-1][j];
			else
			{
				if((v[i]+k[i-1][j-w[i]])>(k[i-1][j]))
				k[i][j]=v[i]+k[i-1][j-w[i]];
				else
				k[i][j]=k[i-1][j];
			}
		}
	}
	printf("optimum profit is %d\n",k[n][wt]);
	i=n;
	j=wt;
	while(i>0)
	{
		while(k[i][j]==k[i-1][j])
		i--;
		selected[i]=1;
		j=j-w[i];
	}
	printf("following items are selected\n");
	for(i=1;i<=n;i++)
	printf("%d ",selected[i]);
	return 0;
}
