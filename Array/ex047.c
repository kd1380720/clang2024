#include <stdio.h>
main()
{
	int i, j;
	float sum, x[3][2];
	for (i = 0, j = 0, sum = 0; i <= 2; i++)
	{
		for (j = 0, sum = 0; j <= 1; j++) 
		{
			printf("x[%d][%d] =",i , j);
			scanf("%f", &x[i][j]);
			sum += x[i][j];
		}
		printf("%ds–Ú‚Ì•½‹Ï = %.2f\n", i, sum / 2);
	}
}