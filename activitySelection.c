#include<stdio.h>
int si[50],fi[50],result[50];
int main()
{
	int n,i,temp,j,minindex,min,current;
	printf("enter no of activities\n");
	scanf("%d",&n);
	printf("enter start and end time of each activity\n");
	for(i=0;i<n;i++)
	scanf("%d %d",&si[i],&fi[i]);
	for(i=0;i<(n-1);i++)
	{
		min=fi[i];
		minindex=i;
		for(j=i+1;j<n;j++)
		{
			if(fi[j]<min)
			{
				min=fi[j];
				minindex=j;
			}
		}
		temp=fi[i];
		fi[i]=fi[minindex];
		fi[minindex]=temp;
		temp=si[i];
		si[i]=si[minindex];
		si[minindex]=temp;		
	}
	for(i=0;i<n;i++)
	result[i]=0;
	result[0]=1;
	current=0;
	for(i=1;i<n;i++)
	{
		if(si[i]>=fi[current])
		{
			result[i]=1;
			current=i;
		}
	}
	printf("following activities are selected\n");
	for(i=0;i<n;i++)
	{
		if(result[i]==1)
		printf(" ( %d %d ) ",si[i],fi[i]);
	}	
	return 0;
}
