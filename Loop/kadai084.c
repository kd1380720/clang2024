#include <stdio.h>
main()
{
	int i,j;
	printf("®”1?");
	scanf("%d", &i);
	printf("®”2?");
	scanf("%d", &j);
	printf("%d / %d = %d ‚ ‚Ü‚è%d\n", i, j, i / j, i % j);
	while (i != 999) {
		printf("®”1?");
		scanf("%d", &i);
		printf("®”2?");
		scanf("%d", &j);
		if (i == -999 || j == -999)break;
		if (j == 0)continue;
		printf("%d / %d = %d ‚ ‚Ü‚è%d\n", i, j, i / j, i % j);
	}
	
}