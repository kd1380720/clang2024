#include<stdio.h>
main()
{
	int i;
	char ar;
	printf("�A���t�@�x�b�g������?");
	scanf("%c", &ar);
	for (i = 0; ar +i <= 'z'; i++)
	{
		printf(" %c",ar + i);
	}
}