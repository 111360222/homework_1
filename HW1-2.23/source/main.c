#include <stdio.h>
#include <stdlib.h>

int main()
{
	int a, b, c;
	printf("please writes three integers and the project can determines largest and smallest\n");
	scanf("%d %d %d", &a, &b, &c);
	if (a > b)
	{
		if (a > c)  //a>b && a>c
		{
			printf("%d is the largest\n", a);
			if (b > c)  //a>b && a>c  && b>c
			{
				printf("%d is the smallest\n", c);
			}
			else //a>b && a>c && c>b
			{
				printf("%d is the smallest\n", b);
			}
		}
		else //a>b && c>a   c>a>b
		{
			printf("%d is the largest\n", c);
			printf("%d is the smallest\n", b);
		}
	}
	else  //b>a
	{
		if (b > c)  //b>a && b>c
		{
			printf("%d is the largest\n", b);
			if (a > c)  //b>a && b>c && a>c
			{
				printf("%d is the smallest\n", c);
			}
			else  //b>a && b>c && c>a
			{
				printf("%d is the smallest\n", a);
			}
		}
		else  //b>a && c>b
		{
			printf("%d is the largest\n", c);
			printf("%d is the smallest\n", a);
		}
	}
	system("pause");
	return 0;
}