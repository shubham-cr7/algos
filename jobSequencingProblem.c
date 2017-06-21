#include<stdio.h>
int deadline[20],profit[20],check[21];
int id[20],result[21];
int main()
{
	int n,i,j,max,maxindex,temp;
	printf("enter no of jobs\n");
	scanf("%d",&n);
	printf("enter id, deadline and profit of each job\n");
	for(i=0;i<n;i++)
	scanf("%d %d %d",&id[i],&deadline[i],&profit[i]);	
	for(i=0;i<(n-1);i++)
	{
		max=profit[i];
		maxindex=i;
		for(j=i+1;j<n;j++)
		{
			if(profit[j]>max)
			{
				max=profit[j];
				maxindex=j;
			}
		}
		temp=profit[i];
		profit[i]=profit[maxindex];
		profit[maxindex]=temp;
		temp=deadline[i];
		deadline[i]=deadline[maxindex];
		deadline[maxindex]=temp;
		temp=id[i];
		id[i]=id[maxindex];
		id[maxindex]=temp;		
	}
	for(i=1;i<=n;i++)
	check[i]=0;
	for(i=0;i<n;i++)
	{
		for(j=deadline[i];j>=1;j--)
		{
			if(check[j]==0)
			{
				check[j]=1;
				result[j]=id[i];
				break;
			}
		}
	}
	printf("sequence of jobs is\n");
	for(i=1;i<=n;i++)
	{
		if(check[i])
		printf("%d ",result[i]);
	}
	return 0;
}
