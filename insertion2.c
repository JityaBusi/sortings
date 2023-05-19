#include<stdio.h>
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
	for(i=1;i<n;i++)
	{
		int key=a[i];
		for(j=i-1;;j--)
		{
			if(a[j]<key||j==-1)
			{
			    a[j+1]=key;
			    break;
	    	}
	    	else
	    	{
	    		a[j+1]=a[j];
			}
		}
	}
	for(i=0;i<n;i++)
	{
		printf("%d ",a[i]);
	}
	
}
