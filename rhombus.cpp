#include <stdio.h>
int main ()
{
	int n;
	printf("enter any number:");
	scanf ("%d",&n);
	
	for (int i=1;i<=n;i++)
	{
		
		for (int j=1;j<=n*2;j++)
		{
			if (j<=i ||j-i>=n+1)
			{
			printf (" ");}
			else
			{
				printf ("*");
			}
		}

		printf ("\n");
	}
}
