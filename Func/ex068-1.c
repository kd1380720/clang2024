#include<stdio.h>
main()
{
	int a, b, c, ret;
	printf("三つの整数空白で区切ってを入力");
	ret = scanf("%d%d%d", &a, &b, &c);
	printf("ret = %d a = %d b = %d c = %d\n", ret, a, b, c);

	printf("整数を入力 (Ctrl + Zで終了) a :");
	while(scanf("%d", &a) != EOF)
	{
		printf("a = %d\n",a);
		printf("整数を入力 (Ctrl + Zで終了) a :");
	}
}