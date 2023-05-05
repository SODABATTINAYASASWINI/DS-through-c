#include<stdio.h>
#define min(a,b) a<b ?  a:b
void merge(int *a,int L,int M,int R)
{
	int res[R-L+1];
	int i=L,j=M+1,k=0;
	while(i<=M && j<=R)
	{
		if(a[i]<= a[j])
		{
			res[k++]=a[i++];
		}
		else
		{
			res[k++]=a[j++];
		}
	}
	while(i<= M)
	{
		res[k++]=a[i++];
	}
	while(j<=R)
	{
		res[k++]=a[j++];
	}
	k=0;
	for(int i=L;i<=R;i++)
	{
		a[i]=res[k++];
	}
}

	void merge_sort_rec(int *a,int l,int r)
	{
		if(l<r)
		{
			int m=(l+r)/2;
			merge_sort_rec(a,l,m);
			merge_sort_rec(a,m+1,r);
			merge(a,l,m,r);
		}
	}

int main()
{
	int i,n;
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	merge_sort_rec(a,0,n-1);
	for(i=0;i<n;i++)
	{
		printf("%d ",a[i]);
	}
	
}
