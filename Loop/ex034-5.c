#include <stdio.h>
main()
{
	int su, i, j;
	printf("”‚Í?");
	scanf("%d", &su);
	for (i = 0; i < su; i++) 
	{
		for(j = 1; j < su - i; j++) 
		{
			printf(" ");
		}
		for (j = 0; j <= i; j++) 
		{
			printf("*");
		}
		printf("\n");
	}
}