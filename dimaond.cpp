#include<stdio.h>
int main()
{
	int n;
	printf("enter any number:");
	scanf("%d",&n);
	int p=n/2 +1;
	int s=n/2;
	for(int i=1;i<=n;i++)
	{
		for( int j=1;j<=p;j++)
		{
			
			if(j<=s)
			{
				printf (" ");
			}
			else
			{
				printf("*");
			}
			
		}
		if(i<=n/2)
		{
		
		s--;
		p++;
	}
	else
	{
		s++;
		p--;
	}
	printf("\n");
	}
}
