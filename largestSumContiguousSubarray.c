#include<stdio.h>
int a[100];
int main()
{
	int n,i,curr,ans;
	printf("enter no of  terms\n");
	scanf("%d",&n);
	printf("enter the terms\n");
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	curr=a[0];
	ans=a[0];
	for(i=1;i<n;i++)
	{
		if((curr+a[i])>a[i])
		curr=curr+a[i];
		else
		curr=a[i];
		if(curr>ans)
		ans=curr;
	}
	printf("largest sum of any contiguous subarray is %d\n",ans);
	return 0;
}
