#include<stdio.h>
int binary_search(int n,int *a,int se)
{
   int low=0,high=n-1,mid;
   while(low<=high)
   {
	mid=(high+low)/2;
	if(se==a[mid]) return mid;
	if(se>a[mid]) low=mid+1;
	if(se<a[mid]) high=mid-1;
  }
	return -1;
}
int main()
{
	int n,se;
	scanf("%d",&n);
	int a[n];
	for(int i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	scanf("%d",&se);
	int r=binary_search(n,a,se);
	if(r==-1) printf("element not found");
	else printf("element is found at %d",r);
}
