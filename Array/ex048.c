#include <stdio.h>
main()
{
	int a[2][2][3] = { {{3,4,5},{4,5,6}},{{2,2,3},{2,5,6}} };
	int i, j, k , sum ;
	for (i = 0, j = 0, k = 0 ,sum = 0; i <= 1; i++)
	{
		printf("\nアパート%d", i + 1);
		for (j = 0, k = 0; j <= 1; j++)
		{
			printf("(%d階):",j +1);
			for (k = 0; k <= 2; k++) {
				printf("%d ", a[i][j][k]);
				sum += a[i][j][k];
			}
		}
	}
	printf("\n全体%dで人住んでいます", sum);
}