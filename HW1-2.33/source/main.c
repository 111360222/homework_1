#include <stdlib.h>
#include <stdio.h>
int main()
{
	//-----------------------input-----------------------
	float km, gas_fee, liter_km, parking_fee, tolls, total;
	printf("Please input Total mileage for one day\n");
	scanf("%f", &km);
	printf("Please input How much a liter of gasoline costs\n");
	scanf("%f", &gas_fee);
	printf("Please input Average number of kilometers per liter\n");
	scanf("%f", &liter_km);
	printf("Please input Parking fee for a day\n");
	scanf("%f", &parking_fee);
	printf("Please input toll for a day\n");
	scanf("%f", &tolls);

	//-----------------------process-----------------------
	total = (liter_km / km)*gas_fee + parking_fee + tolls;

	//-----------------------output-----------------------
	printf("You spend %.2f a day driving to work\n\n", total);
	system("pause");
	return 0;
}