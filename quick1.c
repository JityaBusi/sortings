#include<stdio.h>
int swap(int *q,int *e){
	int t=*q;
	*q=*e;
	*e=t;
}
int lomuto(int *a,int l,int r){
	int p=a[r];
	int i,j;
	for(i=l-1;i<r;i++)
	{
		for(j=l;j<r;j++){
			if(a[j]<p)
			{
				i++;
				swap(&a[i],&a[j]);
			}
		}
		swap(&a[i+1],&a[r]);
		return i+1;
    }
}
void quicksort(int *a,int l,int r){
	if(r>l){
		int p=lomuto(a,l,r);
		quicksort(a,l,p-1);
		quicksort(a,p+1,r);
	}
}
int main()
{
	int n,i;
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	int l=0;
	int r=n-1;
	quicksort(a,l,r);
	for(i=0;i<n;i++)
	{
		printf("%d ",a[i]);
    }

}
