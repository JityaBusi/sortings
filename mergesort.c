#include<stdio.h>
#define min(a,b)a<b ? a:b
void merge(int *arr,int l,int m,int r){
	int res[r-l+1];
	int i=l,j=m+1,k=0;
	while(i<=m && j<=r){
		if(arr[i]<=arr[j]){
			res[k++]=arr[i++];
		}
		else{
			res[k++]=arr[j++];
		}
	}
	while (i<=m){
		res[k++]=arr[i++];
	}
	while(j<=r){
		res[k++]=arr[j++];
	}
	k=0;
	for(i=l;i<=r;i++)
	{
		arr[i]=res[k++];
	}
}
void mergesort(int *arr,int n){
	int l,r,m,p,i;
	for( p=1;p<n;p*=2){
		for(i=0;i<n;i+=2*p){
			l=i;
			r=min(l+2*p-1,n-1);
			m=min(l+p-1,n-1);
			merge(arr,l,m,r);
		}
	}
}
int main(){
	int n;
	scanf("%d",&n);
	int arr[n];
	int l,m,r,i;
	printf("enter l and m values:");
	scanf("%d %d",&l,&m);
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	mergesort(arr,n);
	for(i=0;i<n;i++)
	{
		printf("%d ",arr[i]);
	}
}
