#include <stdio.h>
main()
{
	int su, z,c ;
	printf("数を入れて");
	scanf("%d", &su);
	z = 0;
	z = su;
	while (z > 0) {
		printf("*");
		z--;
	}
}