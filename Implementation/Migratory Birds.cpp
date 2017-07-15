#include<stdio.h>
main()
{
	int i ,j, n, count =0;
	scanf("%d",&n);
	int a[n],b[5];
	int max=0,index;
	
	for(i=0; i<n; i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0; i<5; i++)
	{
		for(j=0; j<n; j++)
		{
			if(a[j] == i +1)
			{
				count++;
			}
			b[i] = count;
		}
	}
	
    for(i=0; i<5; i++)
    {
    	if (max < b[i])
    	{
    		max = b[i];
    		index = i;
		}
	}
	printf("%d",index);
}

