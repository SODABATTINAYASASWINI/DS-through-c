//linear search//
#include<stdio.h>
int linearsearch(int n,int *a,int se)
{
	int i;
	for(i=0;i<n;i++)
	{
		if(a[i]==se) 
	    return i;
	}
	return -1;
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
	int res=linearsearch(n,a,se);
	if(res==-1)
	printf("element not found");
	else 
	printf("the element is found at %d",res);
}
