#include <stdio.h>
main()
{
	char moji ;
	printf("1文字を入力:");
	scanf("%c", &moji);
	if (moji >= 'A' && moji <= 'Z')
	{
		printf("変換結果%c\n",moji + 0x20);
	}
	else
	{
		if (moji >= 'a' && moji <= 'z')
		{
			printf("変換結果%c\n", moji - 0x20);
		}
		else {
			printf("%c\n",moji);
		}
	}
}