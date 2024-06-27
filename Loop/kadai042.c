#include <stdio.h>
main()
{
	int su, z ;
	su = 0;
	z = 1;
	while (su <= 300) {
		printf("%d +",z);
		su += z;
		z++;
	}
	printf("\b=%d\n", su);
}