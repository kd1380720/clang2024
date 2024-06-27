#include <stdio.h>
main()
{
	int su, z ;
	su = 0;
	z = 1;
	do{
		printf("%d +", z);
		su += z;
		z++;
	} while (su <= 300);
	printf("\b=%d\n", su);
}