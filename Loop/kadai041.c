#include <stdio.h>
main()
{
	int gokei, ia, cnt = 0;
	gokei = 0;
	printf("”‚ğ“ü‚ê‚Ä");
	scanf("%d", &ia);
	while (ia != -999) {
		gokei += ia;
		cnt++;
		printf("”‚ğ“ü‚ê‚Ä");
		scanf("%d", &ia);
	}
	printf("‡Œv = %d\n", gokei);
	printf("•½‹Ï = %.2f\n", (float)gokei / cnt);
}