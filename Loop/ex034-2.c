#include <stdio.h>
main()
{
	int i, g;
	printf("����?");
	scanf("%d", &i);
	do 
	{ 
		g = 0;
		for (g; g < 5; g++) {
			printf("*");
		}

		printf("\n");
		i--;

	} while (i > 0);
}