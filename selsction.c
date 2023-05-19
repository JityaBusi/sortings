#include<stdio.h>
int swap (int *a,int n)
{
	int min,i,j,t;
	for(i=0;i<n-1;i++)
	{
	     min=i;
		for(j=i+1;j<n;j++)
		{
			if(a[j]<a[min])
			min=j;
		}
	}
    t=a[i];
	a[i]=a[min];
	a[min]=t;
	
}
int main()
{
	int n,i,j;
	printf("enter size:");
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		swap(a,n);
	}
	for(i=0;i<n;i++)
	{
		printf("%d ",a[i]);
	}
}
