#include<stdio.h>
main()
{
	int n,i,j,c,sum = 0;
	int share , output;
	
	scanf("%d",&n);
	scanf("%d",&i);
	int a[n];
	for(j-0; j<n; j++)
	{
		scanf("%d",&a[j]);
		
	}
	scanf("%d",&c);
	for (j=0; j<n; j++)
	{
		sum = sum + a[j];
	}
	sum = sum - a[i];
	share = sum/2;
	output= c-share;
	if(output ==0)
	{
		printf("Bon Appetit");
	}
	else
	{
		printf("%d",output);
	}
}






