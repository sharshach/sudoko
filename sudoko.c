#include<stdio.h>
//CHILUKURI SRI HARSHA
//15 10 2018
int main()
{
	int a[9][9],present=0,previous;
	for (int i=0;i<9;i++)
	{
		for (int j=0;j<9;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	do
	{
		previous=present;
		present=0;
	for (int i=0;i<9;i++)
	{
		for (int j=0;j<9;j++)
		{
			if (a[i][j]==0)
			{
	int n[9]={0,0,0,0,0,0,0,0,0},t,count=0,main=0;
	for (int k=0;k<9;k++)
	{
		if (a[k][j]!=0)
		{
			t=a[k][j]-1;
			n[t]=n[t]+1;
		}
	}
	for (int k=0;k<9;k++)
	{
		if (a[i][k]!=0)
		{
			t=a[i][k]-1;
			n[t]=n[t]+1;
		}
	}
	for (int s1=0;s1<3;s1++)
{
	for (int s2=0;s2<3;s2++)
	{
		int v1=i-i%3+s1;
		int v2=j-j%3+s2;
		if (a[v1][v2]!=0)
		{
			t=a[v1][v2]-1;
			n[t]=n[t]+1;
		}
	}
}
	for (int k=0;k<9;k++)
	{
		if (n[k]>0)
		{
			count=count+1;
		}
		if (n[k]==0)
		{
			main=k+1;
		}
	}
	if (count==8)
	{
		a[i][j]=main;
	}
	else
	{
	a[i][j]=0;
	}
				}
		}
	}
	for (int i=0;i<9;i++)
	{
		for (int j=0;j<9;j++)
		{
			if (a[i][j]!=0)
			{
				present=present+1;
			}
		}
	}
	if (previous==present)
	{
		goto harsha;
	}
	}while (present<81);
	harsha:
	for (int i=0;i<9;i++)
	{
		for (int j=0;j<9;j++)
		{
			printf("%d   ",a[i][j]);
		}
		printf("\n");
	}
	if (previous==present)
	{
		printf("NO SOLUTION");
	}
}