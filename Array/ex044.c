#include <stdio.h>
main()
{
	char moji1[80], moji2[80], moji3[80];
	int i;
	printf("������P�����:");
	scanf("%s", &moji1[0]);

	printf("������2�����:");
	scanf("%s", &moji2[0]);

	printf("moji1 = %s \t moji2 = %s\n", &moji1[0], &moji2[0]);
	printf("����ւ����\n");
	for (i = 0; moji3[i] = moji1[i]; i++);
	printf("�n�b�s�[");
	for (i = 0; moji1[i] = moji2[i]; i++);
	printf("�n�b�s�[");
	for (i = 0; moji2[i] = moji3[i]; i++);
	printf("�n�b�s�[");
	printf("moji1 = %s \t moji2 = %s\n", &moji1[0], &moji2[0]);
}