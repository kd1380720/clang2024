#include<stdio.h>
main()
{
	int moji;
	printf("����?");
	scanf("%d", &moji);
	if (moji < 0)
	{
		printf("���͒l�́u�}�C�i�X�v�ł�");
	}
	else if (moji > 0)
	{
		printf("���͒l�́u�v���X�v�ł�");
	}
	else {
		printf("���͒l�́u0�v�ł�");
	}
}