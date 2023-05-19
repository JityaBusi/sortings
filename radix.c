#include<stdio.h>
void print(int *a,int n){
	int i;
	for(i=0;i<n;i++){
	printf("%d ",a[i]); 
    }
    printf("\n");
}
int maxi(int *a,int n){
	int max=a[0];
	int i;
	for(i=1;i<n;i++){
		if(a[i]>max){
			max=a[i];
		}
	}
	return max;
}
void radix(int *a,int n){
    int max=maxi(a,n);
	int e=1,i;
	while(max){
		int counts[10]={0};
		int buckets[10][n];
		for(i=0;i<n;i++){
			int place=(a[i]/e)%10;
			buckets[place][counts[place]++]=a[i];
		}
		int k=0,j;
		for(i=0;i<10;i++){
			for( j=0;j<counts[i];j++){
				a[k++]=buckets[i][j];
			}
		}
		e*=10;
		max/=10;
	}
	print(a,n);	
}
int main()
{
	int n,i,p,c;
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	radix(a,n);
}
