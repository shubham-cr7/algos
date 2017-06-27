#include<stdio.h>
int a[100],b[100],ans[101][101];
int main()
{
	int m,n,result,i,j;
	printf("enter no of terms in first array\n");
	scanf("%d",&m);
	printf("enter first array\n");
	for(i=0;i<m;i++)
	scanf("%d",&a[i]);
	printf("enter no of terms in second array\n");
	scanf("%d",&n);
	printf("enter second array\n");
	for(i=0;i<n;i++)
	scanf("%d",&b[i]);
	result=0;
	for(i=0;i<=m;i++)
	{
		for(j=0;j<=n;j++)
		{
			if((i==0)||(j==0))
			ans[i][j]=0;
			else  if(a[i-1]==b[j-1])
			{
				ans[i][j]=ans[i-1][j-1]+1;
				if(ans[i][j]>result)
				result=ans[i][j];
			}
			else
			ans[i][j]=0;
		}
	}
	printf("length of longest commmon subarray is %d\n",result);	
	return 0;
}
