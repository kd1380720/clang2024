#include <stdio.h>
main()
{
	int gokei, ia, cnt = 0;
	gokei = 0;
	printf("����(-999�ŏI��)?");
	scanf("%d", &ia );
	do {
		gokei += ia;
		cnt++;
		printf("����(-999�ŏI��)?");
		scanf("%d", &ia);
	} while (ia != -999);
	printf("���v = %d\n", gokei);
	printf("���� = %f\n", (float)gokei / cnt);
}