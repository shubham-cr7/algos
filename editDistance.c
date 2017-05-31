#include<stdio.h>
#include<string.h>
int ans[21][21];
char s1[20],s2[20];
int main()
{
	int l1,l2,i,j;
	printf("enter first string\n");
	scanf("%s",s1);
	printf("enter second string\n");
	scanf("%s",s2);
	l1=strlen(s1);
	l2=strlen(s2);
	for(i=0;i<=l2;i++)
	ans[0][i]=i;
	for(i=1;i<=l1;i++)
	ans[i][0]=i;
	for(i=1;i<=l1;i++)
	{
		for(j=1;j<=l2;j++)
		{
			if(s1[i-1]==s2[j-1])
			ans[i][j]=ans[i-1][j-1];
			else
			{
				ans[i][j]=1+mini(ans[i-1][j-1],ans[i-1][j],ans[i][j-1]);
			}
		}
	}
	printf("minimum edits required = %d\n",ans[l1][l2]);
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
