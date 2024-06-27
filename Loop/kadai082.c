#include <stdio.h>
main()
{
	int gokei, ia, cnt = 0;
	gokei = 0;
	printf("®”(-999‚ÅI—¹)");
	scanf("%d", &ia);
	gokei += ia;
	cnt += 1;
	while (ia != 999) {
		printf("®”(-999‚ÅI—¹)");
		scanf("%d", &ia);
		if (ia == -999) break;
		if (ia <= -1)continue;
		gokei += ia;
		cnt++;
	}
	printf("‡Œv = %d\n", gokei);
	printf("•½‹Ï = %.3f\n", (float)gokei / cnt);
}