#include<stdio.h>
main()
{
	double ia, ib;
	printf("2つの数値?");
	scanf("%lf%lf", &ia, &ib);
	if (ia < ib)
	{
		printf("大きいほうは = %lf", ib);
	}
	else {
		printf("大きいほうは = %lf", ia);
	}
}