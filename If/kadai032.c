#include<stdio.h>
main()
{
	int a;
	printf("����?");
	scanf("%d", &a);
	a = a % 2;
	if (a >= 1)
	{
		printf("���̐��́u��v�ł�");
	}
	else {
		printf("���̐��́u�����v�ł�");
	}
}