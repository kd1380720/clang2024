#include<stdio.h>
main()
{
	long int idata;
	printf("整数?");
	scanf("%ld", &idata);
	printf("2倍すると%ld\n", idata * 2);
	printf("3倍すると%ld\n", idata * 3);
	printf("4倍すると%ld\n", idata * 4);
}