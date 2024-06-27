#include<stdio.h>
main()
{
	int a;
	printf("整数?");
	scanf("%d", &a);
	a = a % 2;
	if (a >= 1)
	{
		printf("その数は「奇数」です");
	}
	else {
		printf("その数は「偶数」です");
	}
}