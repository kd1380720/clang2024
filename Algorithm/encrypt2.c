#include <stdio.h>
#include <stdlib.h>
#include <time.h>
main()
{
	char s[80];
	int i, n, k[80];
	srand(time(0));
	rand();
	printf("���������͂��ĉ����� > ");
	scanf("%s", &s[0]);
	for (i = 0; s[i] != '\0'; i++)
	{
		k[i] = rand() % 5;
		s[i] = s[i] + k[i];
	}
	printf("�Í���������́A%s\n", &s[0]);
	printf("�Í����L�[�́A");
	for (n = 0; n < i; n++)
	{
		printf("%d", k[n]);
	}
}