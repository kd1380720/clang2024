#include<stdio.h>
main()
{
	double ia, ib;
	printf("2�̐��l?");
	scanf("%lf%lf", &ia, &ib);
	printf("***%.1lf��%.1lf�̎l�����Z***\n", ia, ib);
	printf("�a = %lf",ia + ib );
	printf("�� = %lf", ia - ib);
	printf("�� = %lf", ia * ib);
	printf("�� = %lf ", ia / ib);
}