#include<stdio.h>
main()
{
	int i,j,m,n,d;
	int sum = 0,count = 0;
	scanf("%d",&n);
	int a[n];
	for(i=0; i<n; i++)
	{
		scanf("%d",&a[i]);
    }
        scanf("%d%d",&d,&m);
   
        for(j=0; j<=n-m ; j++)
	     {
	       	for(i=j; i<m+j; i++)
	       	{
	       	  sum = sum +a[i];	
			}
			if(sum == d)
			{
				count ++;
			}
			sum = 0;
		 }
		 printf("%d",count);
}
