#include <stdio.h>
main()
{
	int gokei, ia, cnt = 0;
	gokei = 0;
	printf("数を入れて");
	scanf("%d", &ia);
	while (ia != -999) {
		gokei += ia;
		cnt++;
		printf("数を入れて");
		scanf("%d", &ia);
	}
	printf("合計 = %d\n", gokei);
	printf("平均 = %.2f\n", (float)gokei / cnt);
}