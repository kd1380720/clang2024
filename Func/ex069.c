#include <stdio.h>
main()
{
	int  num, cnt = 0, sum = 0;
	printf("����:");
	while (scanf("%d", &num) != EOF)
	{
		sum += num;
		cnt++;
		printf("����:");
	}
	printf("���v = %d  ���� = %.2f", sum,  (float)sum / cnt);
}