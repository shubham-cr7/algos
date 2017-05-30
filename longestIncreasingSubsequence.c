#include<stdio.h>
int arr[100],dp[100];
int main()
{
	int n,i;
	printf("enter no of terms\n");
	scanf("%d",&n);
	printf("enter terms\n");
	for(i=0;i<n;i++)
	scanf("%d",&arr[i]);
	dp[0]=1;
	for(i=1;i<n;i++)
	{
		dp[i]=dp[i-1];
		if(arr[i]>arr[i-1])
		dp[i]++;
	}
	printf("length of lis is %d\n",dp[n-1]);
}
