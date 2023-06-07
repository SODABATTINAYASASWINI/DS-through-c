//linear search using recursion//
#include<stdio.h>
int linearsearch(int n,int *a,int i,int se)
{
	if(i==n) return -1;
	if(a[i]==se) return i;
	return linearsearch(n,a,i+1,se);
}
int main()
{
	int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++)
    {
    	scanf("%d",&a[i]);
	}
	int se;
	scanf("%d",&se);
	int res=linearsearch(n,a,0,se);
	if(res==-1)
	printf("element not found");
	else 
	printf("the element is found at %d",res);
}
