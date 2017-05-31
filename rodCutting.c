#include<stdio.h>
int a[51],ans[51];
int main()
{
	int n,i,j,max;
	printf("enter length of rod\n");
	scanf("%d",&n);
	printf("enter profit for each part\n");
	for(i=1;i<=n;i++)
	scanf("%d",&a[i]);
	ans[0]=0;
	ans[1]=a[1];
	for(i=2;i<=n;i++)
	{
		max=a[i];
		for(j=i-1;j>=1;j--)
		{
			if((a[j]+ans[i-j])>max)
			max=a[j]+ans[i-j];
		}
		ans[i]=max;
	}
	printf("maximum profit is %d\n",ans[n]);
	return 0;
}
