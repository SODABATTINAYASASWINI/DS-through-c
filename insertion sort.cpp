//insertion sort //
#include<stdio.h>
int insertion_sort(int n,int *a)
{
  int i,j,key;
  for(i=1;i<n;i++)	
  {
  	key=a[i];
  	for(j=i-1;;j--)
  	{
  	  if(a[j] < key) 
  	  {
  	   a[j+1]=key; 
		 break;	
	  }
	  else 
	  {
	  	a[j+1]=a[j];
	  }
	  if(j==-1)
	  {
	  	a[j+1]=key;
	  	break;
	  }
	}
	
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
	insertion_sort(n,a);
	for(i=0;i<n;i++)
	{
		printf("%d ",a[i]);
	}
}
