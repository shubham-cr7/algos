#include<stdio.h>
int s[20],ans[101][20];
int main()
{
	int n,m,i,j,x,y;
	printf("enter the value of total money\n");
	scanf("%d",&n);
	printf("enter no of coins\n");
	scanf("%d",&m);
	printf("enter values of coins\n");
	for(i=0;i<m;i++)
	scanf("%d",&s[i]);
	for(i=0;i<m;i++)
	ans[0][i]=1;
	for(i=1;i<=n;i++)
	{
		for(j=0;j<m;j++)
		{
			if(s[j]>i)
			x=0;
			else
			x=ans[i-s[j]][j];
			if(j==0)
			y=0;
			else
			y=ans[i][j-1];
			ans[i][j]=x+y;
		}
	}
	printf("total no of possibilities are %d\n",ans[n][m-1]);
	return 0;
}
