#include<stdio.h>
main()
{
	int moji;
	printf("整数?");
	scanf("%d", &moji);
	if (moji < 0)
	{
		printf("入力値は「マイナス」です");
	}
	else if (moji > 0)
	{
		printf("入力値は「プラス」です");
	}
	else {
		printf("入力値は「0」です");
	}
}