#include <stdio.h>
main()
{
	int gokei, ia, cnt = 0;
	gokei = 0;
	printf("®”(-999‚ÅI—¹)");
	scanf("%d", &ia);
	while (ia != 999) {
		gokei += ia;
		cnt++;
		printf("®”(-999‚ÅI—¹)");
		scanf("%d", &ia);
		if (ia == -999) break;
	}
	printf("‡Œv = %d\n", gokei);
	printf("•½‹Ï = %.3f\n", (float)gokei / cnt);
}