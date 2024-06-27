#include <stdio.h>
main()
{
	int moji  ;
	printf("整数(-999で入力終了)?");
	scanf("%d", &moji);
	while (moji != -999 ) 
	{
		printf("8進数 = %o\t", moji);
		printf("16進数 = %x\n", moji);
		printf("整数(-999で入力終了)?");
		scanf("%d", &moji);
	}
}