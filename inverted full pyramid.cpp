#include<stdio.h>
int main()
{
	 int n;
	 printf("enter any number:");
	 scanf("%d",&n);
	 
	for( int i=n;i>=1;i--)
	{
		for( int j=1; j<=n*2-1;j++)
		{
			if( j<=n-i|| j>=n+i)
			{
				printf(" ");
			}
			else
			{
				printf("*");
			}
			
			
		}
		printf("\n");
	}
}
