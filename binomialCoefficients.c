#include<stdio.h>
int ans[101][101];
int main()
{
	int n,r,i,j;
	printf("enter n and r to calculate n C r\n");
	scanf("%d %d",&n,&r);
	for(i=0;i<=n;i++)
	{
		for(j=0;j<=mini(i,r);j++)
		{
			if((j==0)||(j==i))
			ans[i][j]=1;
			else
			ans[i][j]=ans[i-1][j-1]+ans[i-1][j];
		}
	}
	printf("value of binomial coefficient is %d\n",ans[n][r]);
	return 0;
}
int mini(int a,int b)
{
	return (a>b)?b:a;
}
