#include <stdio.h>
main()
{
	int moji  ;
	printf("文字コード(-1で入力終了)?");
	scanf("%d", &moji);
	while (moji != -1)
	{
		printf("%c\n", moji);
		printf("文字コード(-1で入力終了)?");
		scanf("%d", &moji);
	}
}