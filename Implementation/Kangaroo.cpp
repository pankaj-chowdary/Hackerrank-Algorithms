#include<stdio.h>
main()
{
	int a,b,x,y;
	int i,c,z,d,p,flag = 0;
	scanf("%d%d",&a,&b);
	scanf("%d%d",&x,&y);
	
	for (i=1; i>0; i++)
	{
		if(a>x)
		{
			p=a-x;
		}
	    else
		{
		  p = x-a;	
		}	
		c= a+b;
		a = c;
		z = x+y;
		x = z;
		
		if(a>x)
		{
			d= a-x;
		}
		else {
			d= x-a;
		}
		
		if(d==0)
		{
			flag = 1;
			i = -1;
		}
		else if(p<d)
		{
			i = -1;
		}
	
	}
		if(flag == 0)
		{
			printf("NO");
		}
		else
		{
			printf("YES");
		}
	
}
