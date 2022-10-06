#include <stdio.h>
#include <stdlib.h>

int main()
{
	float w, h;
	float bmi;
	printf("Please input your weight(kg) and height(m)\n");
	scanf("%f %f", &w, &h);
	bmi = w / (h*h);
	printf("Your BMI is %.2f\n", bmi);
	if (bmi > 30)
		printf("Your BMI is Obese\n");
	if (bmi >= 25 && bmi <= 29.9)
		printf("Your BMI is OverWeight\n");
	if (bmi >= 18.5 && bmi <= 24.9)
		printf("Your BMI is Normal\n");
	if (bmi < 18.5)
		printf("Your BMI is Underweight\n");
	system("pause");
	return 0;
}