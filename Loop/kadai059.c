#include<stdio.h>
main()
{
	int i, s,j;
	printf("   ");
	for (i = 1; i <= 9; i++)
	{
		printf("%3d ", i);
	}
	printf("\n");
	for (i = 1; i <= 9; i++)
	{
		printf(" %d", i);
		printf("|");
		for (j = 0; j < (5 - i); j++)
		{
			printf(" ");
		}
		for (s = 1; s <= 9; s++)
		{
			if (i > 0 && i < 5)
			{
				printf("%2d ", i * s);
			}
			if (i >= 5 && i < 10)
			{
				printf("%3d", i * s);
			}
		}
		printf("\n");
	} 
}