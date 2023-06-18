#include <stdio.h>
int main ()
{
	int n;
	printf(" enter any number :");
	scanf ("%d",&n);
	int s=n/2;
	int c=n/2+1;
	for (int i=1;i<=n;i++)
	{
		for (int j=1;j<=n;j++)
		{
			if (j<=s)
			{
				printf (" ");
			}
			else
			{
				if (j==s+1 || j==c)
				{
				printf ("*");}
				else
				{
					printf (" ");
				}
			}
		}
		if (i<=n/2)
		{
			s--;
			c++;
		}
		else
		{
			s++;
			c--;
		}
		printf ("\n");
	}
}
