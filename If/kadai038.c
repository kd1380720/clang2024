#include <stdio.h>
main()
{
	char moji ;
	printf("1•¶Žš‚ð“ü—Í:");
	scanf("%c", &moji);
	if (moji >= 'A' && moji <= 'Z')
	{
		printf("•ÏŠ·Œ‹‰Ê%c\n",moji + 0x20);
	}
	else
	{
		if (moji >= 'a' && moji <= 'z')
		{
			printf("•ÏŠ·Œ‹‰Ê%c\n", moji - 0x20);
		}
		else {
			printf("%c\n",moji);
		}
	}
}