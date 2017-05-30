#include<stdio.h>
#include<limits.h>
#define max 100
int g[10][10],d[10][10];
int main()
{
	int n,i,j,k;
	printf("enter no of nodes\n");
	scanf("%d",&n);
	printf("enter adjacency matrix for graph\n");
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		scanf("%d",&g[i][j]);
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			d[i][j]=g[i][j];
			if((g[i][j]==0)&&(i!=j))
			d[i][j]=max;
		}
	}
	for(k=0;k<n;k++)
	{
		for(i=0;i<n;i++)
		{
			for(j=0;j<n;j++)
			{
				if(d[i][j]>(d[i][k]+d[k][j]))
				d[i][j]=d[i][k]+d[k][j];
			}
		}
	}
	printf("the final distance matrix is\n");
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		printf("%d ",d[i][j]);
		printf("\n");
	}
	return 0;		
} 
