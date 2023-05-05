#include<stdio.h>
int print_array(int *arr,int n)
{
	for(int i=0;i<n;i++)
	{
		printf("%d ",arr[i]);
	}
	printf("\n");
}
int search_sort(int *arr,int n)
{
   int i,j,tem,ind;
   int min=arr[0];
   for(i=0;i<n-1;i++)
   {
   for(j=i+1;j<n;j++)
   {
     if(arr[ind]>arr[j])
	 {
	 ind=j;
	 }}
     tem=arr[i];
   	arr[i]=arr[ind];
   	arr[ind]=tem;
   
   }
     	
}
int main()
{
	int n;
	scanf("%d",&n);
	int arr[n];
	for(int i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	search_sort(arr,n);
	print_array(arr,n);
	
}
