#include <stdio.h>
int main ()
{
	int n;
	printf("enter any number:");
	scanf ("%d",&n);
	for (int i=1;i<=n;i++)
	{
		for (int j=1;j<=n+i-1;j++)
		{
			if (j<=n-i)
			{
				printf (" ");
			}
			else
			{
				if (j==(n-i)+1||j==n+i-1||i==5)
				{
				printf ("*");}
				else{
					printf(" ");
				}
				
			}
			
		}
		printf ("\n");
	
	}
	}
