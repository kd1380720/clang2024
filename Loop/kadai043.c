#include <stdio.h>
main()
{
	int moji  ;
	printf("�����R�[�h(-1�œ��͏I��)?");
	scanf("%d", &moji);
	while (moji != -1)
	{
		printf("%c\n", moji);
		printf("�����R�[�h(-1�œ��͏I��)?");
		scanf("%d", &moji);
	}
}