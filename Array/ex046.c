#include <stdio.h>
main()
{
	int k, i, gokei;
	int a[][3] = { {10, 20 ,30},{1,2,3} };
	for (gokei = 0, i = 0, k = 0; i <= 1; i++)
	{
		for (gokei = 0, k = 0; k <= 2; k++)
		{
			printf("a[%d][%d] = %d\n", i, k, a[i][k]);
			gokei += a[i][k];
		}
		printf("%d行目の合計 = %d\n",i, gokei);
	}
} 