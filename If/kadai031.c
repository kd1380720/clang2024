#include<stdio.h>
main()
{
	double ia, ib;
	printf("2�̐��l?");
	scanf("%lf%lf", &ia, &ib);
	if (ia < ib)
	{
		printf("�傫���ق��� = %lf", ib);
	}
	else {
		printf("�傫���ق��� = %lf", ia);
	}
}