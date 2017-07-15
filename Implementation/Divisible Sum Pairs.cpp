#include<stdio.h>
main()
{
	int n,i,j;
	int count = 0;
	int k,y;
	scanf("%d",&n);
	scanf("%d",&k);
	int a[n];
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	 
	 for(i=0;i<n;i++)
	 {
	 	for(j=i+1;j<n;j++)
	 	{
	 		 y=a[i] +a[j];
	 		if(y % k  == 0)
	 		{
	 			count ++;
			 }
		 }
	 }
	 printf("%d",count);
}
