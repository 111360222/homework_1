#include <stdio.h>
#include <stdlib.h>

int main()
{
	int a, b;
	printf("Please input two integers and the project can determind the first is a multiple of the second\n");
	scanf("%d %d", &a, &b);
	if (a%b == 0)
		printf("%d is a multiple of %d", a, b);
	else
		printf("%d is not a multiple of %d", a, b);
	system("pause");
	return 0;
}