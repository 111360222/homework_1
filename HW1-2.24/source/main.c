#include <stdio.h>
#include <stdlib.h>

int main()
{
	int a;
	int determind;
	printf("please writes a integer and the project can determinds even or odd\n\n");
	scanf("%d", &a);
	determind = a % 2;
	if (determind == 0)
	{
		printf("%d is even\n", a);
	}
	else
	{
		printf("%d is odd\n", a);
	}
	system("pause");
	return 0;
}