#include <stdio.h>
main()
{
	int i, g,num;
	printf("����?");
	scanf("%d", &num);
	i = 0;
	do 
	{ 
		g = 0;
		do 
		{
			printf("*");
			g++;
		} while (g < i + 1);

		printf("\n");
		i++;

	} while (i < num);
} 