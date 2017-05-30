#include<stdio.h>
char a[20],b[20];
int ans[21][21];
int main()
{
	int n,m,i,j;
	printf("enter length of first string\n");
	scanf("%d",&n);
	printf("enter first string\n");
	scanf("%s",a);
	printf("enter length of second string\n");
	scanf("%d",&m);
	printf("enter second string\n");
	scanf("%s",b);
	for(i=0;i<=n;i++)
	ans[i][0]=0;
	for(i=1;i<=m;i++)
	ans[0][i]=0;
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=m;j++)
		{
			if(b[j-1]==a[i-1])
			ans[i][j]=ans[i-1][j-1]+1;
			else
			{
				if(ans[i-1][j]>ans[i][j-1])
				ans[i][j]=ans[i-1][j];
				else
				ans[i][j]=ans[i][j-1];
			}
		}
	}
	printf("length of lcs is %d",ans[n][m]);
	return 0;
}
