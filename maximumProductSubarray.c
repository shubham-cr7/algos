#include<stdio.h>
int a[100];
int main()
{
	int n,i,currentmax,currentmin,ans,temp;
	printf("enter the no of terms\n");
	scanf("%d",&n);
	printf("enter the terms\n");
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	currentmin=1;
	currentmax=1;
	ans=1;
	for(i=0;i<n;i++)
	{
		if(a[i]>0)
		{
			currentmax=currentmax*a[i];
			if(currentmin!=1)
			currentmin=currentmin*a[i];
		}
		else if(a[i]==0)
		{
			currentmax=1;
			currentmin=1;
		}
		else
		{
			temp=currentmin;
			currentmin=currentmax*a[i];
			if(temp==1)
			currentmax=1;
			else
			currentmax=temp*a[i];
		}
		if(currentmax>ans)
		ans=currentmax;
	}
	printf("product of elements of subarray with maximum product is %d\n",ans);
	return 0;
}
