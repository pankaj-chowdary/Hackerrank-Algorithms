#include<stdio.h>
main()
{
	int i,n;
	scanf("%d",&n);
	int s[n],hs[n],ls[n];
	int hcount =0, lcount =0;
	
	for (i=0 ; i< n ;i++)
	{
		scanf("%d",&s[i]);
		if(i==0)
		{
			hs[i] = s[i];
		}
		else if (hs[i-1]<s[i])
		{
			hs[i]= s[i];
			hcount++;
		}
		else
		{
			hs[i] = hs[i-1];
		}
   
	   
		if(i==0)
		{
			ls[i] == s[i];
		}
		else if (s[i]< ls[i-1])
		{
			ls[i] = s[i];
			lcount++ ;
		}
		
	}
	
	  printf("%d %d",hcount,lcount);
}




