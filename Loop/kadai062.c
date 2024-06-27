#include<stdio.h>
main()
{
	int i;
	i = 20;
	do {
		printf("%3d", i);
		if (i % 10 == 1) {
			printf("\n");
		}
		i--;
	} while (i > 0);
}