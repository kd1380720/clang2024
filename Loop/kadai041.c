#include <stdio.h>
main()
{
	int gokei, ia, cnt = 0;
	gokei = 0;
	printf("��������");
	scanf("%d", &ia);
	while (ia != -999) {
		gokei += ia;
		cnt++;
		printf("��������");
		scanf("%d", &ia);
	}
	printf("���v = %d\n", gokei);
	printf("���� = %.2f\n", (float)gokei / cnt);
}