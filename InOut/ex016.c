#include <stdio.h>
main()
{
	float su;
	printf("実数を入れて:");
	scanf("%f", &su);
	printf("二倍すると%.2f \n", su * 2);
	printf("三倍すると%.2f \n", su * 3);
}