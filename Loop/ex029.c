#include <stdio.h>
main()
{
	int su, z ;
	printf("数を入れて");
	scanf("%d", &su);
	z = 0;
	while (z < su) {
		printf("*");
		z++;
	}
}