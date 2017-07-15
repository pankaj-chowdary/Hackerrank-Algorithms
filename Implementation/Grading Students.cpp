#include<stdio.h>
main()
{
	int n,i,k;
	scanf("%d",&n);
	int a[n],b[n];
	
	for(i=0; i<n; i++)
	{
		scanf("%d",&a[i]);
	}
	
	for(i=0; i<n; i++)
	{
		k =a[i]%5;
		if(a[i]<38)
		{
			b[i] = a[i];
		}
		else if (k>2)
		{
			b[i] = a[i]+5-k;
		}
		else
		{
			b[i] = a[i];
		}
	}
	for(i=0 ;i<n ;i++)
	{
		printf("%d",b[i]);
		printf("\n");
	}
}
