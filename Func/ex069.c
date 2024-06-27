#include <stdio.h>
main()
{
	int  num, cnt = 0, sum = 0;
	printf("®”:");
	while (scanf("%d", &num) != EOF)
	{
		sum += num;
		cnt++;
		printf("®”:");
	}
	printf("‡Œv = %d  •½‹Ï = %.2f", sum,  (float)sum / cnt);
}