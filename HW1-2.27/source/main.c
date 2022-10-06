#include <stdio.h>
#include <stdlib.h>

int main()
{
	int i, j,k,s=0;
	for (i = 1; i <= 5; i++)
	{
		for (k = 10; k >= s; k--)
		{
			printf(" ");
		}
		for (j = 1; j <= 2 * i - 1; j++)
		{
			printf( "*");
		}
		printf("\n");
		s += 1;
	}
	system("pause");
	return 0;
}