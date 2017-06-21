#include<stdio.h>
float profit[50],weight[50];
int main()
{
	float n,ans,sack,w,max,temp;
	int i,j,maxindex;
	printf("enter no of items\n");
	scanf("%f",&n);
	printf("enter weight and value of each item\n");
	for(i=0;i<n;i++)
	scanf("%f %f",&weight[i],&profit[i]);
	printf("enter weight of sack\n");
	scanf("%f",&w);
	for(i=0;i<(n-1);i++)
	{
		max=profit[i]/weight[i];
		maxindex=i;
		for(j=i+1;j<n;j++)
		{
			if((profit[j]/weight[j])>max)
			{
				max=profit[j]/weight[j];
				maxindex=j;
			}
		}
		temp=profit[i];
		profit[i]=profit[maxindex];
		profit[maxindex]=temp;
		temp=weight[i];
		weight[i]=weight[maxindex];
		weight[maxindex]=temp;		
	}
	sack=0;
	ans=0;
	for(i=0;i<n;i++)
	{
		if((sack+weight[i])<w)
		{
			ans=ans+profit[i];
			sack=sack+weight[i];
		}
		else
		{
			ans=ans+profit[i]*((w-sack)/weight[i]);
			break;
		}
	}
	printf("maximum profit pssible is\n");
	printf("%f",ans);	
	return 0;
}
