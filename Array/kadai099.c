#include<stdio.h>
main()
{
	int i, j;
	char c[80];
	printf("�񐔂ƕ���������");
	scanf("%d%s", &i, &c[0]);
	for (j = 0; j < i; j++)
	{
		printf("%s     ", &c[0]);
	}
}