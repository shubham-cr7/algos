#include<stdio.h>
int arr[50][50],ans[50][50];
int main()
{
	int n,m,i,j,x,y;
	printf("enter size of matrix\n");
	scanf("%d %d",&n,&m);
	printf("enter weight of each cell\n");
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		scanf("%d",&arr[i][j]);
	}
	ans[0][0]=arr[0][0];
	for(i=1;i<m;i++)
	ans[0][i]=ans[0][i-1]+arr[0][i];
	for(i=1;i<n;i++)
	ans[i][0]=ans[i-1][0]+arr[i][0];
	for(i=1;i<n;i++)
	{
		for(j=1;j<m;j++)
		ans[i][j]=arr[i][j]+mini(ans[i-1][j-1],ans[i-1][j],ans[i][j-1]);
	}
	printf("enter cell co ordinates where you want to go\n");
	scanf("%d %d",&x,&y);
	printf("min cost till here is %d\n",ans[x][y]);
	return 0;
}
int mini(int a,int b,int c)
{
	if(a<b)
	{
		if(a<c)
		return a;
		else
		return c;
	}
	else
	{
		if(b<c)
		return b;
		else
		return c;
	}
}
