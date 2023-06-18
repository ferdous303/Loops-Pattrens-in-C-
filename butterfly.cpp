#include <stdio.h>
int main ()
{
	int n;
	scanf ("%d",&n);
	int s1=1;
	int s2=5;
	for (int i=1;i<=n;i++)
	{
		for (int j=1;j<=n;j++)
		{
		if (j<=s1 ||j>=s2)
		{
			printf ("*");
			}
			else
			{
				printf (" ");
				}	
		}
		if (i<=n/2)
		{
			s1++;
			s2--;
		}
		else
		{
			s1--;
			s2++;
		}
		printf ("\n");
	}
}
