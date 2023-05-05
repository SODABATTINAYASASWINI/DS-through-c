#include<stdio.h>
int bubble_sort(int n,char *a)
{
	int i,j,temp;
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(a[i]>a[j])
			{
			   temp=a[i];
				a[i]=a[j];
				a[j]=temp;	
			}
		}
}
	printf("%s",a);
}
int main()
{
	int n,i;
	scanf("%d",&n);
	char a[n];
    scanf("%s",&a[i]);
	bubble_sort(n,a);
}
