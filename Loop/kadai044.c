#include <stdio.h>
main()
{
	int moji  ;
	printf("����(-999�œ��͏I��)?");
	scanf("%d", &moji);
	while (moji != -999 ) 
	{
		printf("8�i�� = %o\t", moji);
		printf("16�i�� = %x\n", moji);
		printf("����(-999�œ��͏I��)?");
		scanf("%d", &moji);
	}
}