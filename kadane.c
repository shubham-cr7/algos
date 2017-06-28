#include<stdio.h>
int a[100];
int main()
{
	int n,i,curr,max;
	printf("enter no of terms\n");
	scanf("%d",&n);
	printf("enter the terms\n");
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	curr=0;
	max=0;
	for(i=0;i<n;i++)
	{
		curr=curr+a[i];
		if(curr<0)
		curr=0;
		else if(curr>max)
		max=curr;
	}
	printf("maximum sum in any contiguous subarray is %d\n",max);
	return 0;
}
